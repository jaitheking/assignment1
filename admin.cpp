#include "admin.hpp"


             void admin::add_item_menu(){
                            clearScreen();
                            cout<<"1.Add a new Audio CD."<<endl;
                            cout<<"2.Add a new Book."<<endl;
                            cout<<"3.Add a new Video Game."<<endl;
                            cout<<"4.Exit to Admin Menu."<<endl;
                            cout<<"Enter Your Selection:"<<endl;
                             cin>>choice_sub;
                            switch(choice_sub){
                                case '1':
                                        i = new audio_cd;
                                        add_sales_item();
                                        cout<<"Successfully added new Audio CD."<<endl;

                                        cout<<"Returning into Admin Menu..."<<endl;
                                        delete i;
                                        break;

                                case '2':
                                         i = new book;
                                        add_sales_item();

                                        cout<<"Successfully added new Book."<<endl;
                                        cout<<"Returning into Admin Menu..."<<endl;
                                        delete i;
                                        break;


                                 case '3':
                                            i = new video_game;
                                            add_sales_item();
                                        cout<<"Successfully added new Video Game."<<endl;
                                        cout<<"Returning into Admin Menu..."<<endl;
                                        delete i;
                                        break;


                                case '4':
                                            admin_menu();

                                default:

                                        cout<<"Please enter a valid choice."<<endl;


                                }



             }

            void admin::remove_item_menu(){
                            cout<<"1.Remove Book(s)."<<endl;
                            cout<<"2.Remove Audio CD(s)."<<endl;
                            cout<<"3.Remove Video Game(s)."<<endl;
                            cout<<"4.Exit to Admin Menu."<<endl;
                            cout<<"Enter Your Selection:"<<endl;
                             cin>>choice_sub;
                            switch(choice_sub){
                                case '1':


                                        cout<<"Cold Turkey."<<endl;
                                        cout<<"Returning into Admin Menu..."<<endl;
                                        break;

                                case '2':


                                        cout<<"Successfully added new books."<<endl;
                                        cout<<"Returning into Admin Menu..."<<endl;
                                        break;


                                 case '3':

                                        cout<<"Successfully added new books."<<endl;
                                        cout<<"Returning into Admin Menu..."<<endl;
                                        break;

                                default:

                                        cout<<"Please enter a valid choice."<<endl;


                                }



            }
            void admin::edit_item_menu(){}
            void admin::admin_menu(){
                clearScreen();
                BEGIN:cout<<"Welcome to the Admin Menu"<<endl;
                cout<<"1.Add a new item."<<endl;
                cout<<"2.Remove an existing item."<<endl;
                cout<<"3.Modify an existing item."<<endl;
                cout<<"4.Display the inventory."<<endl;
                cout<<"5.Exit to Main Menu."<<endl;
                cout<<"Enter Your Selection:"<<endl;
                cin>>choice_main;
                switch(choice_main){
                    case '1':
                                add_item_menu();
                                clearScreen();
                                goto BEGIN;
                    case '2':

                                remove_item_menu();
                    case '3':
                                edit_item_menu();


                    case '4':       display_list();
                                    cout<<"Please Press ENTER To Continue."<<endl;
                                    cin.get();
                                    clearScreen();
                                    goto BEGIN;

                    default:
                                    break;
                                    cout<<"Please enter a valid choice."<<endl;

                                    goto BEGIN;



                }

        }
            void admin::add_sales_item(){
//

                                        cout<<"Enter how many items you would like to add:";
                                        cin>>iter;


                                        do {

                                            i->set_item_detail();
                                            itemlist.push_back(*i);
                                            cin.get();

                                            iter--;
                                        }while(iter>0);
            }


//                        cout<<"Enter the number of the item that you wish to remove";
//                        cin>>remove_count;
//                        booklist.erase(booklist.begin()+remove_count-1);



//            void admin::edit_book(){
//                        int edit_count;
//                        cout<<"Enter the number of the item that you wish to edit";
//                        cin>>edit_count;
//                        booklist.erase(booklist.begin()+edit_count-1);
//                        book *b;
//                        b = new book;
//                        b->store_item::set_item_detail();
//                        b->book::set_item_detail();
//                        booklist.push_back(*b);
//                        cin.get();
//                        delete b;
//
//
//
//            }
            void admin::display_list(){

                    int list_count=1;
                    for ( list_iter = itemlist.begin(); list_iter != itemlist.end(); ++list_iter  ) {

                            cout<<list_count<<".";
                            list_count++;
                            list_iter->display();
                    }


            }

