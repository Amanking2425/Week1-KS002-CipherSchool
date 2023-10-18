#include<iostream>
using namespace std;

// void swap(int a, int b)
void swap(int &a, int &b)
// by including the keywors and after the name of datatypes
{
    int c;
    c=a;
    a=b;
    b=c;
    
    cout<<"The values of a and b before swapping are : "<<a<<" "<<b<<endl;
}
int fun(int &a, int &b){
    a=99999;
    b=99999;
    cout<<"The values of a and b inside fun function are : "<<a<<" "<<b<<endl;
}
int main(){
    int a,b;
    int c;
    a=4;
    b=6;
    swap(a,b);
    fun(a,b);
    cout<<"The values of a and b after swapping are :"<<a<<" "<<b<<endl;
    return 0;
}