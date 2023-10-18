#include<iostream>
using namespace std;

void PrintHi(){
    cout<<"Hi"<<endl;
    return;
}

int sum(int a, int b){
    a=99;
    int c;
    c=a+b;
    return c;
}
int main(){

    int a,b;
    int c;

    a=4;
    b=6;
    int d;
    d =sum(a,b);
    cout<<sum(7,8)<<endl;
    PrintHi();
    cout<<"The value of d : "<<c<<endl;
    return 0;
}