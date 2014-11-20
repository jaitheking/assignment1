#include "store_item.hpp"

    store_item::store_item(string item_title, double item_price,int item_quantity):item_title(item_title),item_price(item_price),item_quantity(item_quantity){
            cout<<"A store item has been added successfully.";

    }
    void store_item::display (){

            cout<<"This is"<<getTitle()<<" and price is"<<getPrice()<<" and amount left:"<<getQuantity()<<endl;

    }

    string store_item::getTitle(){
            return item_title;

    }

    double store_item::getPrice(){
            return item_price;

    }

    int store_item::getQuantity(){
            return item_quantity;
    }
