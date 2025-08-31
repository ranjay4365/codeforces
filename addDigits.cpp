#include<iostream>
using namespace std;

int AddDigits(int num);

int main(){
    int sum=AddDigits(258);
    cout<<sum;
    
}

int AddDigits(int num) {
        int sum=0;
        while(num>0){
            int d=num%10;
            sum+=d;
            num/=10;
        }
        if (sum>=0 && sum<10)
    {
        return sum;
    }
    
    else{
        AddDigits(sum);
    }
        
    }