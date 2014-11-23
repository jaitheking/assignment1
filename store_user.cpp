#include "store_user.hpp"
#include "customer.hpp"
#include "admin.hpp"
    int choice;
    string ch;
    admin* a= new admin;
    customer* c = new customer;
void store_user::login(){
    cout<<"Welcome to E-Leisure.com"<<endl;
    LOGIN:cout<<"Please state if you are an admin or a customer:"<<endl;
    cout<<"1.Admin"<<endl;
    cout<<"2.Customer"<<endl;
    cout<<"Your Input:";
    cin >>choice;
    switch (choice){
        case 1 :
        {
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
        case 2:{


                delete c;
                c->set_cust_name();
                c->display_userdetail();
                break;

                default:
                break;
        }
    }





}
