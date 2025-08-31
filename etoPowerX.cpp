#include<iostream>
using namespace std;

double etox(double x,double n){
    static double s=1;
    
    if(n==0){
        return 1;
    }
    s=1+(x/n) *s;
    etox(x,n-1);
    return s;

}

int main(){
    cout<<etox(2,2);
}