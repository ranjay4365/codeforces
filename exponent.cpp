#include<iostream>
#include <math.h>
using namespace std;

int expo(int m, int n){
    if(n==0){
        return 1;
    }else{
        if (n%2!=0)
        {
            return m*expo(m*m,n/2);
        }else{
            return expo(m*m,n/2);
        }
        
        
    }
}
int main(){
    cout<<expo(2,5);
}