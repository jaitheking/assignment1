#include "book.hpp"

    book::book(string item_title,double item_price, int item_quantity,string author, string publisher, int isbn):store_item(item_title,item_price,item_quantity),author(author),publisher(publisher),isbn(isbn)
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
            cout<<"\nTitle:"<<store_item::getTitle();
            cout<<"\nAuthor:"<<getAuthor();
            cout<<"\nPublisher:"<<getPublisher();
            cout<<"\nISBN:"<<getISBN();
}
