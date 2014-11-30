#include "video_game.hpp"
    //Constructor
    video_game::video_game(int item_ID,string item_title,double item_price, int item_quantity,string company, string platform):store_item(item_ID,item_title,item_price,item_quantity),company(company),platform(platform)
    {

    }
    //Fetches Company value
    string video_game::getCompany(){
            return company;


    }
    //Fetches Platform value
    string video_game::getPlatform(){
            return platform;

    }

    //Display Video Game details
    void video_game::display(){

            cout<<"\nVideo Game`s Detail:-";
            cout<<"\nItem ID:"<<getID();
            cout<<"\nTitle:"<<getTitle();
            cout<<"\nCompany:"<<getCompany();
            cout<<"\nPlatform:"<<getPlatform();
            cout<<endl;
    }
    //Prompts user for video game details
     void video_game::set_item_detail(){
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

            cout<<"Please enter the name of the Company:"<<endl;
            cin.get();
            getline(cin,company,'\n');
            this->company=company;

            cout<<"Please enter the type of game platform:"<<endl;
            getline(cin,platform,'\n');
            this->platform=platform;

            cout<<"Successfully added Video Game"<<endl;

    }


