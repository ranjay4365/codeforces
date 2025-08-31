#include<iostream>
#include <math.h>
using namespace std;

void primesInRange(int a,int b){
    

    
    
    for (int i = a; i <= b; i++)
    {   bool prime=true;
        if (i<2)
        {
            prime=false;
        }
        
        for(int j=2;j<sqrt(i);j++){
            if(i%j==0){
                prime=false;
                break;
            }
        }if(prime==true){
            cout<<i<<" ";
        }
        
    }
    
}
int main(){
     
   primesInRange(10,20);
    
}