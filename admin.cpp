#include "admin.hpp"
            //Displays an admin interface to add,remove,modify and display
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
                                clearScreen();
                                goto BEGIN;
                                break;
                    case '3':
                                edit_item_menu();
                                clearScreen();
                                goto BEGIN;
                                break;


                    case '4':
                                    clearScreen();
                                    display_list();
                                    cout<<"Please Press ENTER To Continue."<<endl;
                                    cin.get();
                                    break;
                                    store_user::login();


                    case '5':
                                    clearScreen();
                                    store_user::login();

                    default:


                                    clearScreen();
                                    cout<<"Please enter a valid choice."<<endl;

                                    store_user::login();

                                    break;



                }

        }

            //Option 1 : Display "Add new items" menu
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
            //Option 2: Display "Remove an existing item" menu
            void admin::remove_item_menu(){
                            clearScreen();
                            cout<<"+++++++++++++++++++++++++"<<endl;
                            cout<<"1.Remove an Audio CD."<<endl;
                            cout<<"2.Remove a Book."<<endl;
                            cout<<"3.Remove a Video Game."<<endl;
                            cout<<"4.Exit to Admin Menu."<<endl;
                            cout<<"Enter Your Selection:"<<endl;
                             cin>>choice_sub;
                            switch(choice_sub){
                                case '1':


                                        remove_audio_cd();
                                        cout<<"Returning into Admin Menu..."<<endl;
                                        break;

                                case '2':

                                        remove_book();
                                        cout<<"Successfully added new books."<<endl;
                                        cout<<"Returning into Admin Menu..."<<endl;
                                        break;


                                 case '3':
                                        remove_video_game();
                                        cout<<"Successfully added new books."<<endl;
                                        cout<<"Returning into Admin Menu..."<<endl;
                                        break;

                                default:

                                        cout<<"Please enter a valid choice."<<endl;


                                }



            }
            //Option 3 :Displays the "Modify existing item" menu
            void admin::edit_item_menu(){
                            clearScreen();
                            cout<<"+++++++++++++++++++++++++"<<endl;
                            cout<<"1.Edit An Audio CD."<<endl;
                            cout<<"2.Edit A Book."<<endl;
                            cout<<"3.Edit a Video Game."<<endl;
                            cout<<"4.Exit to Admin Menu."<<endl;
                            cout<<"Enter Your Selection:"<<endl;
                             cin>>choice_sub;
                            switch(choice_sub){
                                case '1':
                                        edit_audio_cd();
                                        cout<<"Returning into Admin Menu..."<<endl;
                                        break;

                                case '2':

                                        edit_book();
                                        cout<<"Returning into Admin Menu..."<<endl;
                                        break;


                                 case '3':
                                        edit_video_game();
                                        cout<<"Returning into Admin Menu..."<<endl;
                                        break;

                                default:

                                        cout<<"Please enter a valid choice."<<endl;


                                }}



