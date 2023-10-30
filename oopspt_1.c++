#include<iostream>
using namespace std;
class vehicle{
    public:
    int tyers;
    int lights;
    int milage;
    string name;

    public:
    void calculatemilage(){
        cout<<"The milage is : "<<milage<<endl;
        cout<<"The no of tyers is : "<<tyers<<endl;
        cout<<"The no of lights is : "<<lights<<endl;
        cout<<"The name of the car  are : "<<name<<endl;
    }
};

class car: public vehicle{
    private:
    int no_of_airbags;
    int ac_consumption;
    
};


int main(){
    car a;
    car b;
    a.milage=88;
    a.tyers =3;
    a.lights=6;
    a.name ="Suzuki";
    a.calculatemilage();
    b.milage=868;
    b.tyers =32;
    b.lights=62;
    b.name ="zuki";
    b.calculatemilage();

}