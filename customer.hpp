#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP
#include "store_user.hpp"

    class customer : public store_user {
            string cust_name;
            string cust_address1;
            string cust_address2;
            string cust_contact_no;
            int select_count,quantity;
            char confirm;
        public:
            char choice;
            char choice1;
            string get_cust_name(); //Gets Customer Name
            string get_cust_address1(); //Gets Customer Address Line 1
            string get_cust_address2(); //Gets Customer Address Line 2
            string get_cust_contact_no(); //Gets Customer Contact Number
            //Vector Declaration
            vector<book> order_booklist;
            vector<book>::iterator orderbook_iter;
            vector<audio_cd> order_cdlist;
            vector<audio_cd>::iterator ordercd_iter;
            vector<video_game>* order_gamelist=new vector<video_game>();
            vector<video_game>::iterator ordergame_iter;
            vector<int> cd_amount;
            vector<int> book_amount;
            vector<int> game_amount;

            void set_cust_name();  //Asks user for name
            void set_cust_address1();//Asks user for address line 1
            void set_cust_address2(); //Asks user for address line 2
            void set_cust_contact_no(); //Asks user for customer contact no
            void display_userdetail(); //asks user for customer contact no
            void cust_menu(); //Customer Interface to make purchase/checkout
            void make_purchase(); //Allows user to make purchases
            void display_purchase();//Displays the purchases made by user


    };
#endif //CUSTOMER_HPP
