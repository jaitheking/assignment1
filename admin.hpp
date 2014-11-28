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
            store_item *i;
        public:

            vector<store_item> itemlist;
            vector<store_item>::iterator list_iter;
            void admin_menu();
            void add_sales_item();
            void add_item_menu();
            void remove_item_menu();
            void edit_item_menu();

            void remove_sales_item();
            void edit_sales_item();
            void display_list();


    };
