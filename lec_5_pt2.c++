#include<iostream>
using namespace std;
int main(){
    int a[4];
    int i;
    cout<<"Take 5 integers as an input"<<endl;

    for(i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"The 5 given integers are : "<<endl;
    for(int i=0;i<5;i++){
        cout<<a[i]<<" "<<endl;
    }

// Print 10 numbers Consecutively

    int ab[10];
    int j;
    cout<<"Take 10 integers as an input"<<endl;

    for(j=0;j<10;j++){
        cin>>ab[j];
    }
    cout<<"The 10 given integers are : "<<endl;
    for(int j=9;j>=0;j--){
        cout<<ab[j]<<" ";
    }
}

    

//initilization of Arrays

// Reading the elements of an Arrays


// Printing the Address of the elements in an Array