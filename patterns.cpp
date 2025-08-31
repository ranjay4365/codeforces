#include <iostream>
using namespace std;
int main(){
    int col,row,n;
    cin>>n;
    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= col; j++)
    //     {
    //         if (i==1|| i==row || j==1 || j==col)
    //         {
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
            
    //     }cout<<endl;
        
    // }
    
    // for (int i = n; i >=1; i--)
    // {
    //     for (int j =i; j >=1; j--)
    //     {
    //         cout<<"*";
    //     }cout<<endl;
        
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = n-1; j >=i; j--)
        {
            cout<<" ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }

    for (int i = 1; i <=n; i++)
    {
        for (int j =1; j <= i; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    int count=1;
     for (int i = 1; i <=n; i++)
    {
        for (int j =1; j <= i; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    
    
}