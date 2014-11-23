#include "store_item.hpp"
#include "book.hpp"
#include "store_user.hpp"
#include <vector>
#include "admin.hpp"
int main(){

         admin *a = new admin;
         a->add_book();
         a->display_book();
         a->remove_book();
         a->display_book();
        //store_user* user = new store_user;
        //user->store_user::login();
        /*cout<<"Please enter a new item"<<endl;
        store_item* item = new store_item;
        item->store_item::set_item_detail();
        item->display();
        delete item;
        book *b;
        vector<book> booklist;
        for (int n=0;n<2;n++){
              b = new book;
            b->store_item::set_item_detail();
            b->book::set_book_detail();


        booklist.push_back(*b);
        cin.get();
        delete b;
        }

        vector<book>::iterator it;

        for (it= booklist.begin();it != booklist.end();++it){
            it->display();

        }
        */
}
