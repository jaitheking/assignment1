#include "store_user.hpp"
#include "book.hpp"
#include "audio_cd.hpp"
#include "video_game.hpp"
#include <vector>
class admin:public store_user{

            int choice_main;
            int choice_sub;
            int iter;
        public:
            vector<book> booklist;
            vector<book>::iterator book_iter;
            vector<audio_cd> cdlist;
            vector<audio_cd>::iterator cd_iter;
            void admin_menu();
            void add_book();
            void add_audio_cd();
            void add_video_game();
            void remove_book();
            void remove_audio_cd();
            void remove_video_game();
            void edit_book();
            void edit_audio_cd();
            void edit_video_game();
            void display_book();
            void display_audio_cd();
            void display_video_game();

    };
