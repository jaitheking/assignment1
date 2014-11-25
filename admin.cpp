#include "admin.hpp"


            void admin::admin_menu(){
                BEGIN:cout<<"Welcome to the Admin Menu"<<endl;
                cout<<"1.Add a new item."<<endl;
                cout<<"2.Remove an existing item."<<endl;
                cout<<"3.Modify an existing item."<<endl;
                cout<<"4.Exit to Main Menu."<<endl;
                cout<<"Enter Your Selection:"<<endl;
                cin>>choice_main;
                switch(choice_main){
                    case 1:{
                            cout<<"1.Add a new Book."<<endl;
                            cout<<"2.Add a new Audio CD."<<endl;
                            cout<<"3.Add a new Video Game."<<endl;
                            cout<<"4.Exit to Admin Menu."<<endl;
                             cin>>choice_sub;
                            switch(choice_sub){
                                case 1:

                                        add_book();
                                        cout<<"Successfully added new books."<<endl;
                                        booklist[0].book::display();
                                        cout<<"Returning into Admin Menu..."<<endl;
                                        break;

                                case 2:

                                        add_audio_cd();
                                        cout<<"Successfully added new books."<<endl;
                                        cout<<"Returning into Admin Menu..."<<endl;
                                        break;


                                 case 3:
                                        add_video_game();
                                        cout<<"Successfully added new books."<<endl;
                                        cout<<"Returning into Admin Menu..."<<endl;
                                        break;

                                default:{

                                        cout<<"Please enter a valid choice."<<endl;

                                        }
                                }



                    }
                    case 2:{
                            cout<<"1.Remove Book(s)."<<endl;
                            cout<<"2.Remove Audio CD(s)."<<endl;
                            cout<<"3.Remove Video Game(s)."<<endl;
                            cout<<"4.Exit to Admin Menu."<<endl;
                             cin>>choice_sub;
                            switch(choice_sub){
                                case 1:

                                        display_book();
                                        cout<<"Cold Turkey."<<endl;
                                        cout<<"Returning into Admin Menu..."<<endl;
                                        break;

                                case 2:

                                        add_audio_cd();
                                        cout<<"Successfully added new books."<<endl;
                                        cout<<"Returning into Admin Menu..."<<endl;
                                        break;


                                 case 3:
                                        add_video_game();
                                        cout<<"Successfully added new books."<<endl;
                                        cout<<"Returning into Admin Menu..."<<endl;
                                        break;

                                default:{

                                        cout<<"Please enter a valid choice."<<endl;

                                        }
                                }



                    }




                    default:{
                                  goto BEGIN;

            }
                }

        }
//            void admin::add_book(){
//                                        cout<<"Enter how many books you would like to add:";
//                                        cin>>iter;
//                                        book *b;
//
//                                        do {
//                                            b = new book;
//                                            b->store_item::set_item_detail();
//                                            b->book::set_detail();
//                                            booklist.push_back(*b);
//                                            cin.get();
//                                            delete b;
//                                            iter--;
//                                        }while(iter>0);
//            }


            void admin::remove_book(){
                        int remove_count;
                        cout<<"Enter the number of the item that you wish to remove";
                        cin>>remove_count;
                        booklist.erase(booklist.begin()+remove_count-1);


            }
            void admin::edit_book(){
                        int edit_count;
                        cout<<"Enter the number of the item that you wish to edit";
                        cin>>edit_count;
                        booklist.erase(booklist.begin()+edit_count-1);
                        book *b;
                        b = new book;
                        b->store_item::set_item_detail();
                        b->book::set_item_detail();
                        booklist.push_back(*b);
                        cin.get();
                        delete b;



            }
            void admin::display_book(){

                    int list_count=1;
                    for ( book_iter = booklist.begin(); book_iter != booklist.end(); ++book_iter  ) {

                            cout<<list_count<<".";
                            list_count++;
                            book_iter->book::display();
                    }


            }

