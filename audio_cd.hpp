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
                audio_cd(int item_ID=0,string item_title="Empty", double item_price=0.0,int item_quantity=0, string artist="Empty", string rec_comp="Empty");
                virtual void display();

                string getArtist();
                string getRec_comp();
                virtual void set_item_detail();
            };


#endif //AUDIO_CD_HPP
