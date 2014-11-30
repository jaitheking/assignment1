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
        void display();
        void display_order();
        store_item(int item_ID=0,string item_title="Empty", double item_price=0.0,int item_quantity=0); //Constructor
        ~store_item(); //Destructor
        int getID();//Gets ID function
        string getTitle();//Gets Title function
        double getPrice();//Gets Price function
        int getQuantity(); // Gets Quantity function
        void set_item_detail(); //Allows user to set details for item
        void setID();//Allows user to set details for item
        void setTitle();//Allows user to set details for item
        void setPrice();//Allows user to set details for item
        void setQuantity();//Allows user to set details for item



};


#endif
