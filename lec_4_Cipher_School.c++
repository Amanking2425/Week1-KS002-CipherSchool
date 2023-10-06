#include<iostream>
using namespace std;

int main(){

int a,b;

cout<<"Input of 2 integers a and b"<<endl;

cin>>a>>b;
// Statement : a>b

cout<<(a>b)<<endl;

// C++ interprets True as 1
// C++ interprets False as 0


//Execute AND OR statements and print out the boolean:


int c,d,e,f;
cout<<"Input of 4 integers "<<endl;
cin>>c>>d>>e>>f;

cout<<(c>d && e>f)<<endl;// in AND operator both condition must be true then output will be true if any one condition is false then output will be false
cout<<(c>d || e>f)<<endl; // in OR operator any one of the condition will be true then the output will be ture if both condition will be true then also output will be true



//Execute if else statement :

float a1;

cin>>a1;

if(a1>10.01){
    cout<<"The condition in if statement is correct"<<endl;
}
else{
    cout<<"The condition is false"<<endl;
}




//Switch case conditional statement :

    return 0;
}