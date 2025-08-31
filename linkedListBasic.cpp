#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;  //Node type Pointer which will store address of next data  
    
    Node(int data1){  //Constructor
        data=data1;
        next=nullptr;
    }
};

int main(){

    Node *a=new Node(1);
    Node *b=new Node(2);
    Node *c=new Node(3);
    Node *d=new Node(4);
    Node *e=new Node(5);

    cout<<a->data<< endl;  // a->The expression a->data is used to access the data member of the Node object that the pointer a is pointing to.

    a->next=b;  // a-> next which means the pointer to next address which was earlier pointing to null, is now pointing to address of b;
    b->next=c;
    c->next=d;
    d->next=e;
    

    Node *temp=a; //it creates a pointer temp that points to the same Node object as a.

    while(temp != 0){
        cout<< temp->data<<"  ";
        //cout<< temp->next<<endl;
        temp=temp->next;
    }

    
    
}