#include "store_item.hpp"


    store_item::store_item(int item_ID,string item_title, double item_price,int item_quantity):item_ID(item_ID),item_title(item_title),item_price(item_price),item_quantity(item_quantity){
                cout<<"An item has been successfully added."<<endl;
    }
    void store_item::display (){

            cout<<"This is "<<getTitle()<<" and price is RM"<<getPrice()<<" and amount left:"<<getQuantity()<<endl;

    }
    int store_item::getID(){
            return item_ID;
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

    void store_item::setID(int item_ID){

            this->item_ID=item_ID;
    }

    void store_item::setTitle(string item_title){

            this->item_title=item_title;

    }

    void store_item::setPrice(double item_price){

            this->item_price=item_price;

    }

    void store_item::setQuantity(int item_quantity){

            this->item_quantity=item_quantity;
    }
