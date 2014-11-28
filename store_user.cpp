#include "store_user.hpp"
#include "admin.hpp"
#include "customer.hpp"


            bool sort_name(audio_cd* a, audio_cd* b)
            {
                return a->getTitle()>b->getTitle();
            }

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

            void store_user::add_audio_cd(){
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

            void store_user::add_book(){
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

            void store_user::add_video_game(){
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

            void store_user::remove_audio_cd(){
                        int remove_count;
                        display_audio_cd();
                        cout<<"Enter the number of the item that you wish to remove";
                        cin>>remove_count;
                        cdlist->erase(cdlist->begin()+remove_count-1);
            }

            void store_user::remove_book(){
                        int remove_count;
                        display_book();
                        cout<<"Enter the number of the item that you wish to remove";
                        cin>>remove_count;
                        booklist->erase(booklist->begin()+remove_count-1);
            }

            void store_user::remove_video_game(){
                        int remove_count;
                        display_video_game();
                        cout<<"Enter the number of the item that you wish to remove";
                        cin>>remove_count;
                        gamelist->erase(gamelist->begin()+remove_count-1);
            }

            void store_user::edit_audio_cd(){
                        int edit_count;
                        cout<<"Enter the number of the item that you wish to edit";
                        cin>>edit_count;
                        cdlist->erase(cdlist->begin()+edit_count-1);
                         a = new audio_cd;
                         a->set_item_detail();
                         cdlist->push_back(*a);
                         cin.get();


            }

            void store_user::edit_book(){
                        int edit_count;
                        cout<<"Enter the number of the item that you wish to edit";
                        cin>>edit_count;
                        booklist->erase(booklist->begin()+edit_count-1);
                         b = new book;
                         b->set_item_detail();
                         booklist->push_back(*b);
                         cin.get();


            }

            void store_user::edit_video_game(){
                        int edit_count;
                        cout<<"Enter the number of the item that you wish to edit";
                        cin>>edit_count;
                        gamelist->erase(gamelist->begin()+edit_count-1);
                         vg = new video_game;
                         vg->set_item_detail();
                         gamelist->push_back(*vg);
                         cin.get();


            }


            void store_user::display_audio_cd(){
                    cout<<"===============LIST STARTS==============="<<endl;
                    int list_count=1;
                    if (cdlist->size()==0){

                        cout<<"List is empty."<<endl;
                    }
                    else{
                        sort(cdlist->begin(), cdlist->end(),SortByCDName());
                        for ( cd_iter = cdlist->begin(); cd_iter != cdlist->end(); ++cd_iter  ) {

                                cout<<"#Item No:"<<list_count<<".";
                                list_count++;
                                cd_iter->display();
                                cout<<endl;
                        }
                    }
                    cout<<"===============LIST ENDS==============="<<endl;
            }

            void store_user::display_book(){
                    cout<<"===============LIST STARTS==============="<<endl;
                    int list_count=1;
                    if (booklist->size()==0){

                        cout<<"List is empty."<<endl;
                    }
                    else{
                        sort(booklist->begin(), booklist->end(),SortByBookName());
                        for ( book_iter = booklist->begin(); book_iter != booklist->end(); ++book_iter  ) {

                                cout<<"#Item No:"<<list_count<<".";
                                list_count++;
                                book_iter->display();
                                cout<<endl;
                        }
                    }
                    cout<<"===============LIST ENDS==============="<<endl;
            }

            void store_user::display_video_game(){
                    cout<<"===============LIST STARTS==============="<<endl;
                    int list_count=1;
                    if (gamelist->size()==0){

                        cout<<"List is empty."<<endl;
                    }
                    else{
                        sort(gamelist->begin(), gamelist->end(),SortByGameName());
                        for ( game_iter = gamelist->begin(); game_iter != gamelist->end(); ++game_iter  ) {

                                cout<<"#Item No:"<<list_count<<".";
                                list_count++;
                                game_iter->display();
                                cout<<endl;
                        }
                    }
                    cout<<"===============LIST ENDS==============="<<endl;
            }

            void store_user::display_list(){
                    int list_count=1;
                    cout<<"===============INVENTORY STARTS==============="<<endl;
                    if (cdlist->size()==0){

                        cout<<"List is empty."<<endl;
                    }
                    else{

                        sort(cdlist->begin(), cdlist->end(),SortByName());
                        for ( cd_iter = cdlist->begin(); cd_iter != cdlist->end(); ++cd_iter  ) {

                            cout<<"#Item No:"<<list_count<<".";
                            list_count++;
                            cd_iter->display();
                            cout<<endl;
                    }

                    }
                    if (booklist->size()==0){
                        cout<<"No Book available."<<endl;
                    }
                    else{
                        sort(booklist->begin(), booklist->end(),SortByBookName());
                        for ( book_iter = booklist->begin(); book_iter != booklist->end(); ++book_iter  ) {

                                cout<<"#Item No:"<<list_count<<".";
                                list_count++;
                                book_iter->display();
                                cout<<endl;
                        }
                    }
                    if (gamelist->size()==0){
                        cout<<"No Video Game available."<<endl;
                    }
                    else{
                        sort(gamelist->begin(), gamelist->end(),SortByGameName());
                        for ( game_iter = gamelist->begin(); game_iter != gamelist->end(); ++game_iter  ) {

                                cout<<"#Item No:"<<list_count<<".";
                                list_count++;
                                game_iter->display();
                                cout<<endl;
                        }
                    }
                    cout<<"===============INVENTORY ENDS==============="<<endl;
            }


