#include "admin.hpp"


             void admin::add_item_menu(){
                            clearScreen();
                            cout<<"+++++++++++++++++++++++++"<<endl;
                            cout<<"1.Add a new Audio CD."<<endl;
                            cout<<"2.Add a new Book."<<endl;
                            cout<<"3.Add a new Video Game."<<endl;
                            cout<<"4.Exit to Admin Menu."<<endl;
                            cout<<"Enter Your Selection:"<<endl;
                             cin>>choice_sub;
                            switch(choice_sub){
                                case '1':
                                        add_audio_cd();
                                        cout<<"Successfully added new Audio CD."<<endl;

                                        cout<<"Returning into Admin Menu..."<<endl;

                                        break;

                                case '2':

                                        add_book();

                                        cout<<"Successfully added new Book."<<endl;
                                        cout<<"Returning into Admin Menu..."<<endl;

                                        break;


                                 case '3':

                                            add_video_game();
                                        cout<<"Successfully added new Video Game."<<endl;
                                        cout<<"Returning into Admin Menu..."<<endl;

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
                                break;
                    case '2':

                                remove_item_menu();
                    case '3':
                                edit_item_menu();


                    case '4':
                                    clearScreen();
                                    display_list();
                                    cout<<"Please Press ENTER To Continue."<<endl;
                                    cin.get();

                                    goto BEGIN;
                    case '5':
                                    clearScreen();
                                    store_user::login();

                    default:


                                    clearScreen();
                                    cout<<"Please enter a valid choice."<<endl;
                                    goto BEGIN;
                                    break;



                }

        }
            void admin::add_audio_cd(){
                                        a = new audio_cd;
                                        cout<<"Enter how many items you would like to add:";
                                        cin>>iter;
                                        do {

                                            a->set_item_detail();
                                            cdlist->push_back(*a);
                                            cin.get();


                                            iter--;
                                        }while(iter>0);
            }

            void admin::add_book(){
                                        b = new book;
                                        cout<<"Enter how many items you would like to add:";
                                        cin>>iter;
                                        do {

                                            b->set_item_detail();
                                            booklist->push_back(*b);
                                            cin.get();


                                            iter--;
                                        }while(iter>0);
            }

            void admin::add_video_game(){
                                        vg= new video_game;
                                        cout<<"Enter how many items you would like to add:";
                                        cin>>iter;
                                        do {

                                            vg->set_item_detail();
                                            gamelist->push_back(*vg);
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
                    cout<<"===============INVENTORY STARTS==============="<<endl;
                    int list_count=1;
                    for ( cd_iter = cdlist->begin(); cd_iter != cdlist->end(); ++cd_iter  ) {

                            cout<<"#Item No:"<<list_count<<".";
                            list_count++;
                            cd_iter->display();
                            cout<<endl;
                    }


                    for ( book_iter = booklist->begin(); book_iter != booklist->end(); ++book_iter  ) {

                            cout<<"#Item No:"<<list_count<<".";
                            list_count++;
                            book_iter->display();
                            cout<<endl;
                    }


                    for ( game_iter = gamelist->begin(); game_iter != gamelist->end(); ++game_iter  ) {

                            cout<<"#Item No:"<<list_count<<".";
                            list_count++;
                            game_iter->display();
                            cout<<endl;
                    }

                    cout<<"===============INVENTORY ENDS==============="<<endl;
            }

