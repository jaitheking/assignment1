#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP
#include "store_user.hpp"

    class customer : public store_user {
            string cust_name;
            string cust_address;
            string cust_contact_no;
        public:
            int choice;
            int choice1;
            string get_cust_name();
            string get_cust_address();
            string get_cust_contact_no();
            void set_cust_name();
            void set_cust_address();
            void set_cust_contact_no();
            void display_userdetail();
            void cust_menu();
            void make_order();
            void display_order();

    };
#endif //CUSTOMER_HPP
