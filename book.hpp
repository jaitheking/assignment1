#ifndef BOOK_HPP
#define BOOK_HPP
#include"store_item.hpp"
#include <iostream>
#include <string>
using namespace std;
class book : public store_item    {
                string author;
                string publisher;
                int isbn;

                public:
                book(int item_ID=0,string item_title="Empty", double item_price=0.0,int item_quantity=0, string author="Empty", string publisher="Empty", int isbn=0);
                void display();

                string getAuthor();
                string getPublisher();
                int getISBN();
                void set_detail();
                void setAuthor();
                void setPublisher();
                void setISBN();
            };


#endif //BOOK_HPP
