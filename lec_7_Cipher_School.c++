#include<iostream>
using namespace std;

// int main(){
//     int password;
//     cout<<"Enter the password: "<<endl;
//     cin>>password;

// while(password<999999){
//     cout<<"The password does not meet the required conditions, Please enter the password again";
//     cin>>password;
// }
//     cout<<"The user has now entered a correct password"<<endl;
// }

int main(){
    int password;
    do{
        cin>>password;
    }
    while(password<999999);
}