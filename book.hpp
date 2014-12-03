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

                void display(); //Display function
                string getAuthor(); //Gets Author value
                string getPublisher(); // Gets Publsher value
                int getISBN(); //Gets ISBN value
                void set_item_detail(); //Prompts user for item detail

            };


#endif //BOOK_HPP
