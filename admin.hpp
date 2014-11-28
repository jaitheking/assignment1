#ifndef ADMIN_HPP
#define ADMIN_HPP
#include "store_user.hpp"


class admin:public store_user{

            char choice_main;
            char choice_sub;

            char type;

        public:


            void admin_menu();
            void add_item_menu();
            void remove_item_menu();
            void edit_item_menu();





    };
#endif //ADMIN_HPP
