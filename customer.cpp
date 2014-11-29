#include "customer.hpp"


    string customer::get_cust_name(){
        return cust_name;

    }

    string customer::get_cust_address1(){
        return cust_address1;

    }

     string customer::get_cust_address2(){
        return cust_address2;

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

    void customer::set_cust_address1(){
            cout<<"Please enter your address (Line 1):";

            getline(std::cin,cust_address1);
            this->cust_address1=cust_address1;

    }

    void customer::set_cust_address2(){
            cout<<"Please enter your address (Line 2):";

            getline(std::cin,cust_address2);
            this->cust_address2=cust_address2;

    }

    void customer::set_cust_contact_no(){
            cout<<"Please enter your contact number:";

            getline(std::cin,cust_contact_no);
            this->cust_contact_no=cust_contact_no;

    }

    void customer::display_userdetail(){
            cout<<"------Customer Details------"<<endl;
            cout<<"Name:"<<get_cust_name()<<endl;
            cout<<"Address:"<<get_cust_address1()<<endl;
            cout<<"Address:"<<get_cust_address2()<<endl;
            cout<<"Contact No:"<<get_cust_contact_no()<<endl;

    }

    void customer::make_purchase(){
                clearScreen()
                CATEGORY:cout<<"Please select a category:"<<endl;
                cout<<"1.Audio CDs"<<endl;
                cout<<"2.Books"<<endl;
                cout<<"3.Video Games"<<endl;

                switch (choice1){
                        case '1' :

                               display_audio_cd();
                               cout<<"Select the item you want:"<<endl;
                               cin>>select_count;
                               cout<<"Enter how many unit of the item do you want:"<<endl;
                               cd_amount.push_back(quantity);
                               order_cdlist->push_back(cdlist->begin()+select_count);
                                cin.get();
                                break;


                    case '2'  :
                                display_book();
                               cout<<"Select the item you want:"<<endl;
                               cin>>select_count;
                               cout<<"Enter how many unit of the item do you want:"<<endl;
                               book_amount.push_back(quantity);
                               order_booklist->push_back(booklist->begin()+select_count);
                                cin.get();
                                break;

                    case '3'  :
                                display_game();
                               cout<<"Select the item you want:"<<endl;
                               cin>>select_count;
                               cout<<"Enter how many unit of the item do you want:"<<endl;
                               game_amount.push_back(quantity);
                               order_gamelist->push_back(gamelist->begin()+select_count);
                                cin.get();
                                break;


                }
    }

    void customer::cust_menu(){
            clearScreen();
            cout<<"What would you like to do?"<<endl;
            cout<<"1.Make a Purchase(s)"<<endl;
            cout<<"2.Checkout"<<endl;
            cout<<"3.Exit to Main Page"<<endl;
            cout<<"Please enter your choice:"<<endl;
            cin>>choice;
            switch (choice){

                case '1' :
                                make_purchase();

                                break;

               case '2' :
                                display_order();
                                cout<<"Are you ready to checkout?"<<endl;
                                cout<<"Ok.Now proceeding to external payment site...."<<endl;
                                break;

            }


    }

    void customer::display_purchase{

            cout<<"###########ORDER CONFIRMATION###########"<<endl;


    }
