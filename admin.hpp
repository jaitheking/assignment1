#include "store_user.hpp"
#include "book.hpp"
#include <vector>
class admin:public store_user{

            int choice_main;
            int choice_sub;
            int iter;
        public:
            vector<book> booklist;
            vector<book>::iterator book_iter;
            void admin_menu();
            void add_book();
            void add_audio_cd();
            void add_video_game();
            void remove_book();
            void edit_item();
            void display_book();

    };
