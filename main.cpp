#include "store_item.hpp"
#include "book.hpp"
#include "store_user.hpp"
#include "admin.hpp"
#include "video_game.hpp"
void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #endif
    #ifdef __linux__
        cout << "\x1B[H\x1B[2J";
    #endif
    }

int main(){

            store_user *usr = new store_user;
            usr->login();

}
