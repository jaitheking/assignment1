#ifndef ADMIN_HPP
#define ADMIN_HPP
#include "store_user.hpp"


class admin:public store_user{

                char choice_main;
                char choice_sub;

            char type;
            public:

                void admin_menu(); //Displays an admin interface to add,remove,modify and display

            protected:



                void add_item_menu(); //Option 1 : Display "Add new items" menu
                void remove_item_menu();//Option 2: Display "Remove an existing item" menu
                void edit_item_menu(); //Option 3 :Displays the "Modify existing item" menu





    };
#endif //ADMIN_HPP
