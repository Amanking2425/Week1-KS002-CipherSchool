#include<iostream>
#include<string>
using namespace std;

int main(){
     string a;
    string b;
    cin>>a>>b;
    cout<<"The given strings are :"<<a<<b<<endl;
    string c;
    c=a+b;// this is called string concatenation
    cout<<"The new strign are : " 
    <<c<<endl;
    cout<<"The length of the string a"<<c.length();
    // getline(cin,a);// getline is a function which is used to print string with space
    // cout<<a;
    return 0;
}