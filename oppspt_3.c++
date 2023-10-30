#include<iostream>
using namespace std;

class coordinate{
    public:
    float a;
    float b;
    public:
    void distancefromcorodinate(float a, float b){
        float dist;
        dist =(this->a-a)*(this->a-a)+ (this->b-b)*(this->b-b);
        cout<<dist;
    }
};

int main(){
    coordinate x;
    x.a=3;
    x.b=4;
    coordinate y;
    y.a =5;
    y.b= 6;
    
    x.distancefromcorodinate(0,0);

}