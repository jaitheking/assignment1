#ifndef STORE_ITEM_HPP
#define STORE_ITEM_HPP
#include <string>
#include <iostream>
#include <vector>


using namespace std;

class store_item {

        protected:
        int item_ID;

        double item_price;
        int item_quantity;


        public:
        string item_title;
        virtual void display();
        store_item(int item_ID=0,string item_title="Empty", double item_price=0.0,int item_quantity=0);
        ~store_item();
        int getID();
        string getTitle();
        double getPrice();
        int getQuantity();
        virtual void set_item_detail();
        void setID();
        void setTitle();
        void setPrice();
        void setQuantity();


};


#endif
