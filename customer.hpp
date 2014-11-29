#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP
#include "store_user.hpp"

    class customer : public store_user {
            string cust_name;
            string cust_address1;
            string cust_address2;
            string cust_contact_no;
            int select_count,quantity;
            char choice
        public:
            char choice;
            char choice1;
            string get_cust_name();
            string get_cust_address1();
            string get_cust_address2();
            string get_cust_contact_no();
            vector<book>* order_booklist=new vector<book>();
            vector<book>::iterator orderbook_iter;
            vector<int> bookquantity;
            vector<audio_cd>* order_cdlist=new vector<audio_cd>();
            vector<audio_cd>::iterator ordercd_iter;
            vector<video_game>* order_gamelist=new vector<video_game>();
            vector<video_game>::iterator ordergame_iter;
            vector<int> cd_amount;
            vector<int> book_amount;
            vector<int> game_amount;
            void set_cust_name();
            void set_cust_address1();
            void set_cust_address2();
            void set_cust_contact_no();
            void display_userdetail();
            void cust_menu();
            void make_purchase();
            void display_purchase();

    };
#endif //CUSTOMER_HPP
