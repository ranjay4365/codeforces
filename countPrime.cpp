#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec(101,0);
    for(int i=2;i*i<=100;i++){             
        for(int j=2*i;j<=100;j+=i){
            if(vec[j]==0){
                vec[j]=1;
            }
        }
    }
    for(int i=2;i<=100;i++){
        if(vec[i]==0){
            cout<<i<<" ";
        }
    }
    return 0;
}