#include "store_user.hpp"
#include "admin.hpp"
#include "customer.hpp"


void store_user::clearScreen() {
                            #ifdef _WIN32
                            system("cls");
                            #endif
                            #ifdef __linux__
                            cout << "\x1B[H\x1B[2J";
                            #endif
                }

void store_user::login(){
    cout<<"Welcome to E-Leisure.com"<<endl;
    LOGIN:cout<<"Please state if you are an admin or a customer:"<<endl;
    cout<<"1.Admin"<<endl;
    cout<<"2.Customer"<<endl;
    cout<<"Your Input:";
    cin >>choice;
    switch (choice){
        case '1' :
        {
                admin *a = new admin;
                cout <<"Please enter admin password:";
                cin>>ch;
                if (ch=="adminpass"){
                    a->admin::admin_menu();
                    delete a;
                    break;
                }
                else{
                    cout <<"Try Again. (Exit with Ctrl-C)"<<endl;
                    goto LOGIN;
                    break;
                }
        }
        case '2':{


                customer *c = new customer;
                c->set_cust_name();
                c->display_userdetail();
                delete c;
                break;


        }
        default:

                    cout<<"Please Enter A Valid Choice."<<endl;
                    cout<<"Press ENTER to continue."<<endl;
                    cin.get();
                    goto LOGIN;
    }





}
