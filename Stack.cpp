#include<bits/stdc++.h>
using namespace std;
class StackImpl{
    private :
        int top = -1;
        int st[10];
        const int size =10;
         
    public :
        void push(int data){
            if(top==size){
                cout<<"Stack Overflow";
                return;
            }
            top++;
            st[top]=data;
        }

        int pop(){
            if(top==-1){
                cout<<"Stack Underflow";
                return 0;
            }
            
            int popElement=st[top];
            top--;
            return popElement;
        }
        int peak(){
            if(top==-1){
                cout<<"Stack is empty= ";
                return 0;
            }
            return st[top];
        }
        bool isEmpty(){
            return top==-1;
        }
};

int main(){
    StackImpl st;
    st.push(5);
    // st.push(8);
    // st.push(9);
    // st.push(1);
    // st.push(4);
    // st.push(3);

    int popElement=st.pop();
    cout<<popElement<<endl;

    bool empty=st.isEmpty();
    cout<<empty<<endl;
    
    int peakElement=st.peak();
    cout<<peakElement<<endl;
}