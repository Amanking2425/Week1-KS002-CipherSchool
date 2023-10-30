#include<iostream>
using namespace std;

int main(){
    // char name[5];
    // cout<<"Enter your name : ( Note: Enter a after the end of your name : )";
    // int i=0;
    // while(1){
    //     cin>>name[i];
    //     if(name[i]=='#') break;
    //     i++;
    // }
    //     cout<<"The name entered by me is "<<endl;

    //  while(name[i]!='a'){
    //     cin>>name[i];
    // }

    string name;
    cin>>name;
    for(int i=0;i<6;i++){
        cout<<name[i]<<endl;
    }
         cout<<name[1]<<endl;

    return 0;
}