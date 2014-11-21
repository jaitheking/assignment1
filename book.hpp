#include"store_item.hpp"
#include <iostream>
#include <string>
using namespace std;
class book : public store_item    {
                string author;
                string publisher;
                int isbn;

                public:
                book(int item_ID,string item_title,double item_price,int item_quantity, string author, string publisher, int isbn);
                void display();
                string getAuthor();
                string getPublisher();
                int getISBN();
                void setAuthor();
                void setPublisher();
                void setISBN();
            };
