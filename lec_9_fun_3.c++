#include<iostream>
using namespace std;

int compare(int a , int b){
    int c;
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int a =35;
    int b =382;
    int c= compare(a,b);
    cout <<c;
    return 0;
}