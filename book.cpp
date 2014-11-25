#include "book.hpp"

    book::book(int item_ID,string item_title,double item_price, int item_quantity,string author, string publisher, int isbn):store_item(item_ID,item_title,item_price,item_quantity),author(author),publisher(publisher),isbn(isbn)
    {

    }

    string book::getAuthor(){
            return author;


    }
    string book::getPublisher(){
            return publisher;

    }

    int book::getISBN(){
            return isbn;

    }
    void book::display(){

            cout<<"\nBook`s Detail:-";
            cout<<"\nItem ID:"<<getID();
            cout<<"\nTitle:"<<getTitle();
            cout<<"\nAuthor:"<<getAuthor();
            cout<<"\nPublisher:"<<getPublisher();
            cout<<"\nISBN:"<<getISBN();
            cout<<endl;
    }

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

