#include<iostream>
using namespace std;


int fun1(int n, int k){
    if(n==0){
        return 0;
    }else{
        return fun1(n-1,k)+k;
    }
}
int main(){
    static int k=5;
    int a=3;
    cout<< fun1(a,k);

}