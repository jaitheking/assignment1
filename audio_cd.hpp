#ifndef AUDIO_CD_HPP
#define AUDIO_CD_HPP
#include"store_item.hpp"
#include <iostream>
#include <string>
using namespace std;
class audio_cd : public store_item    {
                string artist;
                string rec_comp;


                public:
                //constructor

                void display();//display function
                string getArtist();//Get Artist value
                string getRec_comp(); //Get Recording Company Value
                void set_item_detail();//Prompts user for item detail

            };


#endif //AUDIO_CD_HPP
