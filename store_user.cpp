#include "store_user.hpp"
#include "customer.hpp"
    int choice;
    string ch;
void store_user::login(){
    cout<<"Welcome to E-Leisure.com"<<endl;
    LOGIN:cout<<"Please state if you are an admin or a customer:"<<endl;
    cout<<"1.Admin"<<endl;
    cout<<"2.Customer"<<endl;
    cout<<"Your Input:";
    cin >>choice;
    switch (choice){
        case 1 :
        cout <<"Please enter admin password:";
        cin>>ch;
        if (ch=="adminpass")
        {
        cout<<"Hello";
        }
        else{
        cout <<"Try Again. (Exit with Ctrl-C)"<<endl;
        goto LOGIN;
        break;
        }

        case 2:
        customer* c = new customer;

        c->set_cust_name();
        c->set_cust_address();
        c->set_cust_contact_no();
        c->display_userdetail();
        break;


    }





}
