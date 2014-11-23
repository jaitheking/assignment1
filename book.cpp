#include "book.hpp"

    book::book(int item_ID,string item_title,double item_price, int item_quantity,string author, string publisher, int isbn):store_item(item_ID,item_title,item_price,item_quantity),author(author),publisher(publisher),isbn(isbn)
    {
            cout<<"A book has been added."<<endl;
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

            cout<<"Book`s Detail:-"<<endl;
            cout<<"\nItem ID:"<<store_item::getID();
            cout<<"\nTitle:"<<store_item::getTitle();
            cout<<"\nAuthor:"<<getAuthor();
            cout<<"\nPublisher:"<<getPublisher();
            cout<<"\nISBN:"<<getISBN();
            cout<<endl;
    }

     void book::set_detail(){
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

    }

    void book::setAuthor(){
            cout<<"Please enter the name of the Author:"<<endl;

            cin.get();
            getline(cin,author,'\n');

            this->author=author;



    }
    void book::setPublisher(){
            cout<<"Please enter the name of the Publisher:"<<endl;
            cin.get();
            getline(cin,publisher,'\n');

            this->publisher=publisher;

    }

    void book::setISBN(){
            cout<<"Please enter the ISBN:";
            cin>>isbn;
            this->isbn=isbn;

    }
