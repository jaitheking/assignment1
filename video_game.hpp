#ifndef VIDEO_GAME_HPP
#define VIDEO_GAME_HPP
#include"store_item.hpp"
#include <iostream>
#include <string>
using namespace std;
class video_game : public store_item    {
                string company;
                string platform;


                public:
                video_game(int item_ID=0,string item_title="Empty", double item_price=0.0,int item_quantity=0, string company="Empty", string platform="Empty");
                virtual void display();

                string getCompany();
                string getPlatform();
                virtual void set_item_detail();
            };


#endif //VIDEO_GAME_HPP

