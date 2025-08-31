#include<iostream>
using namespace std;

void add(int a, int b, int &sum){
        sum=a+b;
    }
int main(){
    // int n,sum=0,temp;
    // cin>>n;
    // temp=n;
    // while (n>0)
    // {
    //     int d=n%10;
    //     sum+=(d*d*d);
    //     n/=10;
    // }
    // if (sum==temp)
    // {
    //     cout<<"Armstrong number";
    // }else{
    //     cout<<"Not a armstrong number";
    // }

    // int year;
    // cin>>year;

    // if (year%4==0)
    // {
    //     if (year%100==0)
    //     {
    //         cout<<"not a leap year";
    //     }else{
    //         cout<<"Leap year";
    //     }
        
        
    // }else if (year%400==0)
    // {
    //     cout<<"Leap year";
    // }else{
    //      cout<<"not a leap year";
    // }
    
    int a=20;
    int b=10;
    int sum=0;
    add(a,b,sum);
    cout <<sum;
    
    

}