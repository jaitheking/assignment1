#ifndef STORE_USER_HPP
#define STORE_USER_HPP
#include <iostream>
#include <string>
#include "book.hpp"
#include "audio_cd.hpp"
#include "video_game.hpp"
#include <vector>
#include <algorithm>

using namespace std;
class store_user {
            string name;
            string password;
            char choice;
            string ch;
            int iter;
            audio_cd *a;
            book *b;
            video_game *vg;

        public:
            //Sort Audio CD vector by alphabetical order
            class SortByCDName {
                 public:
                  bool operator() (audio_cd a, audio_cd b)
                  { return a.getTitle()< b.getTitle(); }
                };
            //Sort Boo vector by alphabetical order

            class SortByBookName {
                 public:
                  bool operator() (book a, book b)
                  { return a.getTitle()< b.getTitle(); }
                };
            //Sort Audio CD vector by alphabetical order
            class SortByGameName {
                 public:
                  bool operator() (video_game a, video_game b)
                  { return a.getTitle()< b.getTitle(); }
                };
            //Vector Declarations
            vector<book>* booklist=new vector<book>();
            vector<book>::iterator book_iter;
            vector<audio_cd>* cdlist=new vector<audio_cd>();
            vector<audio_cd>::iterator cd_iter;
            vector<video_game>* gamelist=new vector<video_game>();
            vector<video_game>::iterator game_iter;

            void clearScreen(); //Clears screen
            void login();//Login interface

            //Add item
            void add_audio_cd();
            void add_book();
            void add_video_game();

            //Remove item
            void remove_audio_cd();
            void remove_book();
            void remove_video_game();

            //Modify item
            void edit_audio_cd();
            void edit_book();
            void edit_video_game();

            //Displays items
            void display_audio_cd();
            void display_book();
            void display_video_game();
            void display_list();


        };






#endif // STORE_USER_HPP
