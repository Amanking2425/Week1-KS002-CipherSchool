//STL-> Standard template library

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int *arr;
//     arr = new int[5];
//     delete arr;
//     // a vector is an array whose size is not ficed and will allocate space everytime you add a new element
//     vector<int> a;
//     cout<<"The size of the vector is "<<a.size();
//     int i;
//     for(i=0;i<7;i++){
//         a.push_back(i+1);
//     }
//     cout<<"The size of the vector is :"<<a.size();

//     a.pop_back(); // it is used for removing the element
//     cout<<"The size of the vector is :"<<a.size();
//     cout<<"The first element of the vector is "<<a[5];

//     for(auto j=a.begin();j<a.end();j++){
//         cout<<*j;
//     }
//     cout<<endl<<"The capicity of the vector is "<<a.capacity()<<endl;
// }


// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//     stack<int> a;
//     a.push(5);
//     a.push(6);
//     a.push(3);

//     cout<<a.top()<<endl;
//             a.pop();
//     cout<<a.top()<<endl;
//             a.pop();
//     cout<<a.top()<<endl;
//     a.pop();


//     if(a.empty()==1){
//         cout<<"The stack is currently not empty";
//     }
//     else{
//         cout<<"The stack is full";
//     }
//     a.pop();
//     a.pop();

//     if(a.empty()==1){
//         cout<<"The stack is currently not empty";
//     }
//     else{
//         cout<<"The stack is full";
//     }
// }

// #include<iostream>
// #include<map>
// using namespace std;

// int main(){
//     map<string,int> hash;
//     hash["rohit"] = 1;
//     hash["programming"] = 2;
//     hash["reddy"] = 3;

//     cout<<"The value of rohit in the hashtable is "<<hash["rohit"];

//     for(auto j =hash.begin();j!=hash.end();j++){
//         cout<<"The key will be "<<j->first<<"The value in the key will be "<<j->second<<endl;
//     }
// }


#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> a;
    a.push_back(4);
    a.push_front(2);
    a.push_back(3);
    a.push_front(2);

    a.pop_back();
    a.pop_front();

    // a.shot();
    for(auto i=a.begin();i!=a.end();i++){
        cout<<*i<<" ";
    }
}