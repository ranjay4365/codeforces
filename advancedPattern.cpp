#include <iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;

    // for (int i =n ; i >=1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<endl;
    
    // for (int i =1 ; i <=n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if ((i+j)%2==0)
    //         {
    //             cout<<1<<" ";
    //         }else{
    //             cout<<0<<" ";
    //         }
            
    //     }
    //     cout<<endl;
    // }

    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = n-1; j>= i; j--)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 1; j <=n; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
        
        
    // }

    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = n-1; j>= i; j--)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
        
        
    // }
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = n-1; j>= i; j--)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = i; j >=1; j--)
    //     {
    //         cout<<j;
    //     }
    //     for (int j = 2; j <= i; j++)
    //     {
    //         cout<<j;
    //     }
        
    //     cout<<endl;
        
        
    // }

    for(int i=1;i<=3;i++){
        for(int j=1;j<=9;j++){
            if(((i+j)%4==0) || (i==2 && j%4==0)){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }cout<<endl;
    }

    
    

}