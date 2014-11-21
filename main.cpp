#include "store_item.hpp"
#include "book.hpp"
#include "store_user.hpp"
#include <vector>

int main(){
        //store_user* user = new store_user;
        //user->store_user::login();
        cout<<"Please enter a new item"<<endl;
        store_item* item = new store_item;
        item->store_item::setID();
        item->store_item::setTitle();
        item->store_item::setPrice();
        item->store_item::setQuantity();
        item->display();
        delete item;
        book *b;
        vector<book> booklist;
        for (int n=0;n<3;n++){
              b = new book;
            b->store_item::setID();
            b->store_item::setTitle();
            b->store_item::setPrice();
            b->store_item::setQuantity();
            b->book::setAuthor();
            b->book::setPublisher();
            b->book::setISBN();


        booklist.push_back(*b);
        cin.get();
        delete b;
        }

        vector<book>::iterator it;

        for (it= booklist.begin();it != booklist.end();++it){
            it->display();

        }
}
