#ifndef STORE_ITEM_HPP
#define STORE_ITEM_HPP
#include <string>
#include <iostream>

using namespace std;
class store_item {

        protected:
        int item_ID;
        string item_title;
        double item_price;
        int item_quantity;

        public:
        void display();
        store_item(int item_ID=0,string item_title="Empty", double item_price=0.0,int item_quantity=0);
        int getID();
        string getTitle();
        double getPrice();
        int getQuantity();
        void setID(int item_ID);
        void setTitle(string item_title);
        void setPrice(double item_price);
        void setQuantity(int item_quantity);

};


#endif
