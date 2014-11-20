#include "store_item.hpp"
#include "book.hpp"

int main(){
        store_item *item = new store_item("The Mistletoe",25.50,12);
        item->display();
        book b("Hunger Games",100.45,5,"MockingJay","Katniss",101003100);
        b.display();




}
