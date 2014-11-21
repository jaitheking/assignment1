#include "store_item.hpp"
      string str;

    store_item::store_item(int item_ID,string item_title, double item_price,int item_quantity):item_ID(item_ID),item_title(item_title),item_price(item_price),item_quantity(item_quantity){

    }
    void store_item::display (){
            cout<<"An item has been successfully added."<<endl;
            cout<<"Item ID:"<<getID()<<"\tTitle:"<<getTitle()<<"\tPrice:"<<getPrice()<<"\tQuantity:"<<getQuantity()<<endl;

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

    void store_item::setID(){
            cout<<"Enter ID:";
            cin >>item_ID;
            this->item_ID=item_ID;
    }

    void store_item::setTitle(){
            cout<<"Enter Title:";
            cin.ignore();
            getline(std::cin,item_title);
            //cin>>item_title;
            this->item_title=item_title;
    }

    void store_item::setPrice(){
            cout<<"Enter Price:";
            cin >>item_price;
            this->item_price=item_price;
    }

    void store_item::setQuantity(){
            cout<<"Enter Quantity:";
            cin >>item_quantity;
            this->item_quantity=item_quantity;
    }
