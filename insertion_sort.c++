#include<iostream>
using namespace std;

int main(){
    cout<<"Input an array of elements which you are to sort, et us say: 6 elements";

    int i,j;
    int a[6];

    for(i=0;i<6;i++)
        cin>>a[i];
    int key;

    key = a[j];
    i=j-1;

    while(a[i]>key && i>=0){
        a[i+1]=a[i];
        i--;
    }
}