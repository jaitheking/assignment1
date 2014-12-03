#include "store_item.hpp"
    //Destructor
    store_item::~store_item(){



    }
    //Constructor
    store_item::store_item(int item_ID,string item_title, double item_price,int item_quantity):item_ID(item_ID),item_title(item_title),item_price(item_price),item_quantity(item_quantity){

    }

    //Display Store Items function
    void store_item::display (){
            cout<<"\nStore Item`s Detail:-"<<endl;
            cout<<"Item ID:"<<getID();
            cout<<"\nTitle:"<<getTitle();
            cout<<"\nPrice:RM"<<getPrice();
            cout<<"\nQuantity:"<<getQuantity()<<endl;

    }
    //Display Order on Store Items function
    void store_item::display_order(){

            cout<<getID()<<"\t"<<getTitle()<<"\t"<<getPrice()<<"\t";

    }
    //Fetches Item_ID
    int store_item::getID(){
            return item_ID;
    }
    //Fetches Item_Title
    string store_item::getTitle(){
            return item_title;

    }
    //Fetches Item_Price
    double store_item::getPrice(){
            return item_price;

    }
    //Fetches Item_quantity
    int store_item::getQuantity(){
            return item_quantity;
    }
    //Set item`s details via Admin input
    void store_item::set_item_detail(){
            cout<<"Enter ID:";
            cin >>item_ID;
            this->item_ID=item_ID;

            cout<<"Enter Title:"<<endl;
            cin.get();
            getline(cin,item_title,'\n');
            this->item_title=item_title;

            cout<<"Enter Price:";
            cin >>item_price;
            this->item_price=item_price;

            cout<<"Enter Quantity:";
            cin >>item_quantity;
            this->item_quantity=item_quantity;
            cout<<"Successfully added Item"<<endl;

    }


