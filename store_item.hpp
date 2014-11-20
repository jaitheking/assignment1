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
        store_item(string item_title, double item_price,int item_quantity);
        string getTitle();
        double getPrice();
        int getQuantity();
};


#endif
