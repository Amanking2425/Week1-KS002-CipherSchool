// // How to swap 2 variables using pointers

// #include<iostream>
// using namespace std;

// void swap(int *x, int *y){ // a,b are different
//     int c;  // x and y are the poiters to a,b --> they store the address of a and b

//   c = *x;
//   *x = *y;
//   *y =c;  // to get a,b from x and y we need to dereference the pointer

//   cout<<"The swapping is complete"<<endl;
// }

// int main(){
//     int a, b;
//     a=3;
//     b=4;

//     swap(&a,&b);
//     cout<<"The value of a and b after swapping are :"<<a<<" "<<b<<endl;
//     return 0;
// }


// How to return multiple values using functions

#include<iostream>
using namespace std;

int main(){
  int a[10];

  cout<<"Values for comparison : "<<endl;

  cout<<"The value of a is  "<<a<<endl;
  cout<<"The value of a is  "<<&a[0]<<endl;
  cout<<"The value of a is  "<<a[1]<<endl;
  return 0;
}


