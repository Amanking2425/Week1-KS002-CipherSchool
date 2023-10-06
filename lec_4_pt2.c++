#include<iostream>
using namespace std;

// int main(){

//     int marks;
//     cout<<"Students,Please enter your marks to calculate your grade : ";
//     cin>>marks;

//     if(marks>=90){
//         cout<<"O";
//     }
//     else if(marks>=80){
//         cout<<"A+";
//     }
//     else if(marks>=70){
//         cout<<"A";
//     }
//     else if(marks>=60){
//         cout<<"B+";
//     }
//     else if(marks>=50){
//         cout<<"B";
//     }
//     else{
//         cout<<"FAIL";
//     }

//     return 0;
// }

int main(){
    int a;
    cout<<"Enter a integer a = ";
    cin>>a;

    switch(a){
        case 1:
        cout<<"The value of a is 1";
        break;

        case 2:
        cout<<"The value of a is 2";
        break;

        default:
        cout<<"The default will always printed";
        break;
    }
}