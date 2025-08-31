#include <iostream>
using namespace std;

int factorial(int n){
    if (n==0){
        return 1;
    }else{
        return factorial(n-1)*n;
    }
    
    
}
int calc_nCr(int n,int r){

    if(r>n){
        return 0;
    }
    else{
        return factorial(n)/(factorial(r)*factorial(n-r));
    }
    
}
int main(){
    cout<<calc_nCr(4,4); // nCr= n!/r! *(n-r)!
}