#include "audio_cd.hpp"

    audio_cd::audio_cd(int item_ID,string item_title,double item_price, int item_quantity,string artist, string rec_comp):store_item(item_ID,item_title,item_price,item_quantity),artist(artist),rec_comp(rec_comp)
    {

    }

    string audio_cd::getArtist(){
            return artist;


    }
    string audio_cd::getRec_comp(){
            return rec_comp;

    }


    void audio_cd::display(){

            cout<<"\nAudio CD`s Detail:-";
            cout<<"\nItem ID:"<<getID();
            cout<<"\nTitle:"<<getTitle();
            cout<<"\nArtist:"<<getArtist();
            cout<<"\nPublisher:"<<getRec_comp();
            cout<<endl;
    }

      void audio_cd::set_item_detail(){
            cout<<"Enter ID:";
            cin >>item_ID;
            this->item_ID=item_ID;

            cout<<"Enter Title:"<<endl;
            cin.get();
            getline(cin,item_title,'\n');
            this->item_title=item_title;

            cout<<"Enter Price:";
            cin >>item_price;
            this->item_price=item_price;

            cout<<"Enter Quantity:";
            cin >>item_quantity;
            this->item_quantity=item_quantity;

            cout<<"Please enter the name of the Artist:"<<endl;
            cin.get();
            getline(cin,artist,'\n');
            this->artist=artist;

            cout<<"Please enter the name of the recording company:"<<endl;
            getline(cin,rec_comp,'\n');
            this->rec_comp=rec_comp;

            cout<<"Successfully added Audio CD"<<endl;

    }

