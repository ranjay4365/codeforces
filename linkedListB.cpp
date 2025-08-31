#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node * convertArrtoLL(vector<int>vec){
    Node*head=new Node(vec[0]);  
    Node*mover=head; 

    for(int i=1;i<vec.size();i++){
        Node*temp=new Node(vec[i]);
        mover->next=temp;   
        mover=temp;
    }
    return head;

}


void display(Node * first){
    Node* temp=first;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node * deleteHead(Node * head){
    if(head==nullptr || head->next==nullptr){
        delete(head);
    }
        Node* temp=head;
        head=head->next;
        delete(temp);
        return head;
    
}

Node * beginInsertion(Node * first){
    int a;
    cout<<"Enter new element"<<endl;

    cin>>a;

    Node * temp=new Node(a);
    temp->next=first;
    first=temp;

    cout<<"Linked list after insertion at begining"<<endl;
    return first;
    
}

void endInsertion(Node * first){
    int a;
    cout<<"Enter element to insert at end"<<endl;
    cin>>a;

    Node * temp=first;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    Node * tail=new Node(a);
    temp->next=tail;
    cout<<"Linked list after insertion at end"<<endl;
    

}
Node * midInsertion(int pos,Node * first){
    

    int count=0;
    Node *cMover=first;
    while(cMover!=nullptr){
        count+=1;
        cMover=cMover->next;
    }
    if(pos>count+1){
        cout<<"Invalid position! Enter value less than or equal to "<<count+1 <<endl;
        return first;
    }
    Node * temp=first;


    if(pos==1){
        beginInsertion(first);
        
    }
    else if(pos==count+1){
        endInsertion(first);
    }
    else if(pos>1 && pos<=count){
        Node* p=new Node(100);
    for(int i=0;i<pos-2;i++){
        temp=temp->next;
    }
    Node * mover=temp->next;
    p->next=mover;
    temp->next=p;

    return first;
    
    }
    

    
}
Node *endDeletion(Node *first){

    if(first==NULL){
        
        return NULL;
    }
    if(first->next==NULL){
        delete(first);
        return NULL;
    }
    
    Node *temp=first;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }

    Node *lastNode=temp->next;
    temp->next=NULL;
    delete(lastNode);

    return first;
}

Node *randomDeletion(int pos,Node *first){

    int c=1;
    Node *count=first;
    while(count->next!=NULL){
        c++;
        count=count->next;
    }
    cout<<endl<<c<<endl;
    if(pos==1){
        Node *tempo=first;
        first=first->next;
        free(tempo);
        return first;
    }
    else if(pos>c){
        cout<<"Invalid position ! Position doesn't exist.We have only "<<c<<" elements";
        //return first;
    }
    else if(pos==c){
        first=endDeletion(first);
        return first;

    }
    Node *temp=first;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    Node *p=temp->next;
    Node *mover=temp->next;
    mover=mover->next;
    temp->next=mover;
    free(p);
    return first;

}



int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    vector<int>nums(n);
    for(int i=0;i<nums.size();i++){
        int a;
        cout<<"Enter " << i <<" th"<<endl;
        cin>>a;
        nums[i]=a;

    }
    Node* first= convertArrtoLL(nums); 

    cout<<"Our Linked List is : "<<endl;
    display (first); 
    cout<<endl;   

    //first=deleteHead(first);
    //cout<<"Linked list after deleting first node"<<endl;

    // display(first);   

    // first=beginInsertion(first);
    // display(first);

    // endInsertion(first);
    // display(first);

    // int position;
    // cout<<"Enter position where you want to insert your node:"<<endl;
    // cin>>position;
    // first=midInsertion(position,first);
    // display(first);

    //first=endDeletion(first);

    first=randomDeletion(5,first);
    display(first);
    
    


}
