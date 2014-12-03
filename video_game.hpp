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

                void display(); //Display function
                string getCompany(); //Gets Company value
                string getPlatform(); //Gets Platform value
                void set_item_detail(); //Prompts user for item details
            };


#endif //VIDEO_GAME_HPP

