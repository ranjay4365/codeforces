#include <bits/stdc++.h>
#include<cmath>
using namespace std;
int countdigit(int n)
{
    int count=0;
    while(n>=1)
    {
        n=n/10;
        count++;
    }
    return count;
}
bool Armstrong(int n,int count){
    int ans=0;
    int p=n;
    while(p>0)
    {
        int rem=p%10;
         int s = static_cast<int>(pow(rem, count) + 0.5);
        ans+= s;
        cout<<ans<<endl;
        p=p/10;
    }

    return ans==n;
}
    int main()
    {
        int n;
        cout<<"Enter a number = ";
        cin>>n;
        int count = countdigit(n);
       cout<<Armstrong(n, count);

    }