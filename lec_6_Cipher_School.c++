//Loops
#include<iostream>
using namespace std;
int main(){
    int i;
    for(int i=1;i<=100;i++){
        cout<<i<<" ";
    }
    int a=1;
    while(a<101){
        cout<<a<<" ";
        a++;
    }

    // guess the number 65
    // the user has 100 chances
    int input;
   int j =100;
    for(j=1;j<100;j++){
            cin>>input;
            if(input==65){
                cout<<"Congrants";
                break;
            }
    }
}
