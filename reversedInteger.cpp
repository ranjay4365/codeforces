#include<iostream>
using namespace std;

int reverseInt(int x);
int reverseInt(int x){
    int rev=0;
    if (x>=0)
    {
        while (x>0)
        {
            int d=x%10;
            rev=rev*10+d;
            x/=10;
        }
        return rev;
    }else{
        while (x<0)
        {
            int d=x%10;
            rev=rev*10+d;
            x/=10;
        }
        return rev;
    }
    
    
    
}

int main()
{
    int reverseNum=reverseInt(-120);
    cout<<reverseNum;

    
}