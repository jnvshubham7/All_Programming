#include<bits/stdc++.h>
// #include "Hero.cpp"
using namespace std;


// class Hero{


//     //properties
//     // int health;

//     // char name[20];

//     // string type;




// };



class Hero {

    public:
    // private:
    // protected:

    // properties
    int health;
    // char name[100];

    char level;


    // private:
    // char level;

    // void print()
    // {
    //     cout<<"this is private function"<<endl;
    
    // }

   
   //get and set function
    void setHealth(int h)
    {
         health=h;
    }

    int getHealth()
    {
        return health;
    }

    void setLevel(char l)
    {
        level=l;
    }

    char getLevel()
    {
        return level;
    }


};




int main(){
   // creation  of object
    // Hero h1;
    // static allocation
    Hero a;
    a.setHealth(100);
    a.setLevel('A');


    // cout<<"level of a is "<<a.getLevel()<<endl;
    // cout<<"health of a is "<<a.getHealth()<<endl;





    //daynamic allocation
    Hero *b = new Hero;
    b->setHealth(200);
    b->setLevel('B');

    

    cout<<"level of b is "<<(*b).getLevel()<<endl;
    cout<<"health of b is "<<(*b).getHealth()<<endl;

    // cout<<"level of b is "<<b->getLevel()<<endl;
    // cout<<"health of b is "<<b->getHealth()<<endl;











    // Hero shubham;

    // shubham.setHealth(100);
    // shubham.setLevel('A');

    // cout<<"health of shubham is "<<shubham.getHealth()<<endl;

    // cout<<"level of shubham is "<<shubham.getLevel()<<endl;






    // shubham.health=100;
    // shubham.level='A';

    // cout<<"health of shubham is "<<shubham.health<<endl;

    // cout<<"level of shubham is "<<shubham.level<<endl;

    //call print functionq
    // shubham.print();








    // cout<<sizeof(h1)<<endl;






    return 0;
}