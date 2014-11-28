#include "store_user.hpp"
#include "book.hpp"
#include "audio_cd.hpp"
#include "video_game.hpp"
#include <vector>

class admin:public store_user{

            char choice_main;
            char choice_sub;
            int iter;
            char type;
            audio_cd *a;
            book *b;
            video_game *vg;
        public:

            vector<book>* booklist=new vector<book>();
            vector<book>::iterator book_iter;
            vector<audio_cd>* cdlist=new vector<audio_cd>();
            vector<audio_cd>::iterator cd_iter;
            vector<video_game>* gamelist=new vector<video_game>();
            vector<video_game>::iterator game_iter;
            void admin_menu();
            void add_audio_cd();
            void add_book();
            void add_video_game();
            void add_item_menu();
            void remove_item_menu();
            void edit_item_menu();

            void remove_sales_item();
            void edit_sales_item();
            void display_list();


    };
