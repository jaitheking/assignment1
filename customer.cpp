#include "customer.hpp"


    //Fetches customer`s name
    string customer::get_cust_name(){
        return cust_name;

    }
    //Fetches first line of customer`s address
    string customer::get_cust_address1(){
        return cust_address1;

    }
     //Fetches second line of customer`s address
     string customer::get_cust_address2(){
        return cust_address2;

    }
    //Fetches customer`s contact number
    string customer::get_cust_contact_no(){
        return cust_contact_no;

    }
    //Prompts user for name
    void customer::set_cust_name(){
            cout<<"Please enter your full name:";
            cin.ignore();
            getline(std::cin,cust_name);
            this->cust_name=cust_name;

    }
    //Prompts user for address line 1
    void customer::set_cust_address1(){
            cout<<"Please enter your address (Line 1):";

            getline(std::cin,cust_address1);
            this->cust_address1=cust_address1;

    }
    //Prompts user for address line 2
    void customer::set_cust_address2(){
            cout<<"Please enter your address (Line 2):";

            getline(std::cin,cust_address2);
            this->cust_address2=cust_address2;

    }
    //Prompts user for contact number
    void customer::set_cust_contact_no(){
            cout<<"Please enter your contact number:";

            getline(std::cin,cust_contact_no);
            this->cust_contact_no=cust_contact_no;

    }
    //Function to display Customer`s information
    void customer::display_userdetail(){
            cout<<"------Customer Details------"<<endl;
            cout<<"Name:"<<get_cust_name()<<endl;
            cout<<"Address:"<<get_cust_address1()<<endl;
            cout<<"Address:"<<get_cust_address2()<<endl;
            cout<<"Contact No:"<<get_cust_contact_no()<<endl;

    }
    //Function to make purchase as Customer
    void customer::make_purchase(){
                store_user::clearScreen();
                CATEGORY:cout<<"Please select a category:"<<endl;
                cout<<"1.Audio CDs"<<endl;
                cout<<"2.Books"<<endl;
                cout<<"3.Video Games"<<endl;
                cout<<"Please Enter your selection:"<<endl;
                cin>>choice1;
                switch (choice1){
                        case '1' :

                               store_user::display_audio_cd();
                               cout<<"Select the item you want:"<<endl;
                               cin>>select_count;
                               cout<<"Enter how many unit of the item do you want:"<<endl;
                               cd_amount.push_back(quantity);

                                audio_cd a;
                                a = cdlist->at(select_count);
                               order_cdlist.push_back(a);
                                cin.get();
                                goto CATEGORY;
                                break;


//                    case '2'  :
//                                display_book();
//                               cout<<"Select the item you want:"<<endl;
//                               cin>>select_count;
//                               cout<<"Enter how many unit of the item do you want:"<<endl;
//                               book_amount.push_back(quantity);
//                               order_booklist->push_back(booklist[select_count+1]);
//                                cin.get();
//                                break;
//
//                    case '3'  :
//                                display_game();
//                               cout<<"Select the item you want:"<<endl;
//                               cin>>select_count;
//                               cout<<"Enter how many unit of the item do you want:"<<endl;
//                               game_amount.push_back(quantity);
//                               order_gamelist->push_back(gamelist[select_count+1]);
//                                cin.get();
//                                break;


                }
    }
    //Displays a menu for Customer to Make Purchase and Checkout
    void customer::cust_menu(){
            store_user::clearScreen();
            MAIN:cout<<"What would you like to do?"<<endl;
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
                                display_purchase();
                                cout<<"Are you ready to checkout?(Y/N)"<<endl;
                                cin>>confirm;
                                if (confirm == 'Y' || 'y'){
                                cout<<"Ok.Now proceeding to external payment site...."<<endl;
                                break;
                                }
                                else {
                                goto MAIN;
                                break;
                                }


            }


    }
    //Function to display the purchased items
    void customer::display_purchase(){
                    store_user::clearScreen();
                    cout<<"###########ORDER CONFIRMATION###########"<<endl;
                    display_userdetail();
                    int list_count=1;

                    if (order_cdlist.size()==0){


                            }
                            else{

                                    int i = 0;
                                for ( ordercd_iter = order_cdlist.begin(); ordercd_iter != order_cdlist.end(); ++ordercd_iter  ) {

                                    cout<<list_count<<".";
                                    list_count++;
                                    ordercd_iter->display_order();
                                    cout<<cd_amount[i];
                                    i++;
                                    cout<<endl;
                            }

                            }
                    if (order_booklist.size()==0){


                    }
                    else{

                            int i = 0;
                        for ( orderbook_iter = order_booklist.begin(); orderbook_iter != order_booklist.end(); ++orderbook_iter  ) {

                            cout<<list_count<<".";
                            list_count++;
                            orderbook_iter->display_order();
                            cout<<book_amount[i];
                            i++;
                            cout<<endl;
                    }

                    }
                   if (order_gamelist->size()==0){


                    }
                    else{

                            int i = 0;
                        for ( ordergame_iter = order_gamelist->begin(); ordergame_iter != order_gamelist->end(); ++ordergame_iter  ) {

                            cout<<list_count<<".";
                            list_count++;
                            ordergame_iter->display_order();
                            cout<<game_amount[i];
                            i++;
                            cout<<endl;
                    }

                    }

    }
