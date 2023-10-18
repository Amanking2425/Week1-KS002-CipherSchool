#include<iostream>
using namespace std;

int main(){
    int a;
    long long int b;
    float c;
    cout<<"The size of int is :"<<sizeof(a)<<endl;
    cout<<"The size of long long int is :"<<sizeof(b)<<endl;
    cout<<"The address of int is : "<<&a<<"\n"<<"The address of long long int is : "<<&b<<endl;
     cout<<"The size of float is :"<<&c<<endl;


    return 0;
}