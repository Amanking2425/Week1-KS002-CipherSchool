// Linked List
#include<iostream>
using namespace std;

class node{
public:
int data;
node* next;
// constructor
node(int data_input){
    this->data=data_input;
    this->next=NULL;
}
};

void printnode(node* &node){
    cout<<"value "<<node->data<<" ";
    cout<<"Address "<<node->next<<" ";
}

int main(){
    node * node1 = new node(3);
    node * node2 = new node(4);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    // cout<<node2->data<<endl;
    // cout<<node2->next<<endl;
    printnode(node1);
    cout<<endl<<node1<<endl;
    printnode(node2);

    return 0;
}