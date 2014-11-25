#include "store_item.hpp"
#include "book.hpp"
#include "store_user.hpp"
#include "admin.hpp"
#include "video_game.hpp"
int main(){

            store_item *s[4] = { new store_item, new book, new audio_cd, new video_game };
            for (int i = 0; i < 4; i++) {
                s[i]->set_item_detail();

            }
            for (int i = 0; i < 4; i++) {
                s[i]->display();

            }
            delete s[4];
}
