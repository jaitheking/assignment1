class store_user {
        string name;
        string password;
    class admin:public store_user{
        public:
            add_item();
            remove_item();
            edit_item();
            display_item();

    }
    class customer:public store_user{
            string cust_name;
            string cust_address;
            string contact_no;
        public:
            make_order();
            display_order();

    }



}
