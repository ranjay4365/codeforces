#include<iostream>
using namespace std;
bool isPythagoreanTriplet(int a, int b,int c){
    int a2=a*a;
    int b2=b*b;
    int c2=c*c;

    if ((a2==b2+c2)||(b2==a2+c2)||(c2==a2+b2))
    {
        return true;
    }else{
        return false;
    }
    
    
    
    
}
int main(){
    cout<<isPythagoreanTriplet(4,8,16 );

    
}