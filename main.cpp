#include "store_item.hpp"
#include "book.hpp"

int main(){
        store_item* item = new store_item;
        item->setID(10);
        item->setTitle("Hercules");
        item->setPrice(50.00);
        item->setQuantity(23);

        item->display();
        book* b = new book(2,"Hunger Games",100.45,5,"MockingJay","Katniss",101003100);
        b->display();
        delete b;




}
