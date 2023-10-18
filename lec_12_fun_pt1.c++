#include<iostream>
using namespace std;

int main(){
    // int a;
    // float b;
    // cout<<"The address of a is "<<&a<<endl;
    // cout<<"The address of a is "<<&b<<endl;
    int a;
    int b;
    int c;

    int *p;
    int *q;

    p =&a;
    q =&b;

    a=2;
    b=5;

    c= *p+*q;

    // cout<<"The value of a is (from the actual variable type) "<<a<<endl;
    // cout<<"The value of a from the pointer using (astreix/ indirection operator) "<<*p<<endl;
    cout<<"The value of c is : "<<c;

 }