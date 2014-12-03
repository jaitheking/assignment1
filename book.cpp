#include "book.hpp"

    //Fetches Author value
    string book::getAuthor(){
            return author;


    }
    //Fetches Publisher value
    string book::getPublisher(){
            return publisher;

    }
    //Fetches ISBN value
    int book::getISBN(){
            return isbn;

    }
    //Displas Book`s detail
    void book::display(){

            cout<<"\nBook`s Detail:-";
            cout<<"\nItem ID:"<<getID();
            cout<<"\nTitle:"<<getTitle();
            cout<<"\nPrice:RM"<<getPrice();
            cout<<"\nQuantity:"<<getQuantity();
            cout<<"\nAuthor:"<<getAuthor();
            cout<<"\nPublisher:"<<getPublisher();
            cout<<"\nISBN:"<<getISBN();
            cout<<endl;
    }
    //Prompts User for Book`s Detail
     void book::set_item_detail(){
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

            cout<<"Please enter the name of the Author:"<<endl;
            cin.get();
            getline(cin,author,'\n');
            this->author=author;

            cout<<"Please enter the name of the Publisher:"<<endl;
            getline(cin,publisher,'\n');
            this->publisher=publisher;

            cout<<"Please enter the ISBN:";
            cin>>isbn;
            this->isbn=isbn;

            cout<<"Successfully added Book"<<endl;


    }

