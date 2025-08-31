#include<bits/stdc++.h>
using namespace std;
class Que{
    private:
        int size;
        int rear;
        int front;
        int current_size;
        int *q;
    public:
        Que(int size){
            this->size=size;
            current_size=0;
            rear=front=-1;
            q=new int[size];
            
        }    
        void push(int data){
            if(current_size==size){
                cout<<"Queue is full"<<endl;
                return;
            }if(current_size==0){
                rear=0;
                front=0;
            }else{
                rear=(rear+1)%size;
            }
            q[rear]=data;
            current_size+=1;
        }
        int pop(){
            if(current_size==0){
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            int element=q[front];
            if(current_size==1){
                rear=-1;
                front=-1;
                
            }else{
                front=(front+1)%size;
                
            }current_size-=1;
            return element;
        }
        int top(){
            return q[front];
        }

};
int main(){
    Que q(6);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);
    q.push(11);
    //cout<<q.top()<<endl;

    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.top()<<endl;

    return 0;
}
