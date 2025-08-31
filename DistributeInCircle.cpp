#include<iostream>
using namespace std;

//int solve(int A, int B, int C);

void fun1(int n){
    if(n>0){
        cout<<n;
        fun1(n-1);
        fun1(n-1);
    }
}

int main(){
    //cout<<solve(8,5,2);
    int a=2;
    fun1(a);
}
// int solve(int A, int B, int C) {

//     return ((C+A)-1)%B;
// }
