#include "customer.hpp"


    string customer::get_cust_name(){
        return cust_name;

    }

    string customer::get_cust_address(){
        return cust_address;

    }

    string customer::get_cust_contact_no(){
        return cust_contact_no;

    }

    void customer::set_cust_name(){
            cout<<"Please enter your full name:";
            cin.ignore();
            getline(std::cin,cust_name);
            this->cust_name=cust_name;

    }

    void customer::set_cust_address(){
            cout<<"Please enter your address:";

            getline(std::cin,cust_address);
            this->cust_address=cust_address;

    }

    void customer::set_cust_contact_no(){
            cout<<"Please enter your contact number:";

            getline(std::cin,cust_contact_no);
            this->cust_contact_no=cust_contact_no;

    }

    void customer::display_userdetail(){
            cout<<"------Customer Details------"<<endl;
            cout<<"Name:"<<get_cust_name()<<endl;
            cout<<"Address:"<<get_cust_address()<<endl;
            cout<<"Contact No:"<<get_cust_contact_no()<<endl;

    }

    void customer::cust_menu(){
            cout<<"What would you like to do?"<<endl;
            cout<<"1.Make a Purchase(s)"<<endl;
            cout<<"2.Checkout"<<endl;
            cout<<"3.Exit to Main Page"<<endl;
            cout<<"Please enter your choice:"<<endl;
            cin>>choice;
            switch (choice){

                case 1 :

                CATEGORY:cout<<"Please select a category:"<<endl;
                cout<<"1.Books"<<endl;
                cout<<"2.Audio CD"<<endl;
                cout<<"3.Video Games"<<endl;
                switch (choice1){
                    case 1 :

                            goto CATEGORY;

                }
                break;

            }


    }
