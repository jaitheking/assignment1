#include "book.hpp"

    book::book(int item_ID,string item_title,double item_price, int item_quantity,string author, string publisher, int isbn):store_item(item_ID,item_title,item_price,item_quantity),author(author),publisher(publisher),isbn(isbn)
    {
            cout<<"A book has been added. Author:"<<getAuthor()<<endl;
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

            cout<<"This is a book and the details are:"<<endl;
            cout<<"\nItem ID:"<<store_item::getID();
            cout<<"\nTitle:"<<store_item::getTitle();
            cout<<"\nAuthor:"<<getAuthor();
            cout<<"\nPublisher:"<<getPublisher();
            cout<<"\nISBN:"<<getISBN();
    }

    void book::setAuthor(){
            cout<<"Please enter the name of the Author:";
            cin.ignore();
            getline(std::cin,author);
            this->author=author;

    }
    void book::setPublisher(){
            cout<<"Please enter the name of the Publisher:";
            getline(std::cin,publisher);
            this->publisher=publisher;

    }

    void book::setISBN(){
            cout<<"Please enter the ISBN:";
            cin>>isbn;
            this->isbn=isbn;

    }
