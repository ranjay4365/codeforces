#include<iostream>
using namespace std;

int printn(int n){
    
    if (n==0 )
    {
        return n;
    }else{
        printn(n-1);
        cout<<n<<endl;
        
        
    }
    
}
int main(){
    printn(10);
}