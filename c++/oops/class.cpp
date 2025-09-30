#include <iostream>
using namespace std;

class Hero{

    //properties
    private: 
    int health;
    public: 
    char level;

   
    
    // getter 
    int gethealth(){
        return health;
    }
    int getlevel(){
        return level;
    }
    // setter
    void sethealth(int h){
        health=h;
    }
    void setlevel(int ch){
        level=ch;
    }


};
int main(){


    
    // static allocation
    // Hero a;
    // cout<<"level is "<<a.level<<endl;
    // cout<<"health is "<<a.gethealth()<<endl;

    // // dynamic alloaction
    // Hero* b  = new Hero;
    // b->sethealth(56);
    // b->setlevel('A');
    // cout<<"level is "<<(*b).level<<endl; //or
    // cout<<"level is "<<b->level<<endl; 

    // cout<<"health is "<<b->gethealth()<<endl;
    

    // creation of Object
    // Hero deadpool;

    // // updation of the value
    // // deadpool.health=89;
    // deadpool.sethealth(85);
    // deadpool.level='b';


    // // cout<<"health deadpool: "<<deadpool.health<<endl; // accessing public  
    // cout<<"deadpool health is: "<<deadpool.gethealth()<<endl;// accessing private 
    // cout<<"level deadpool: "<<deadpool.level<<endl; 

    // cout<<"size : "<<sizeof(deadpool);

    
return 0;
}