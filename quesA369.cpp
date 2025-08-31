#include<bits/stdc++.h>
using namespace std;

int differenceEquals(int p,int q){
    int count=0;

    int commonDiff=abs(q-p);

    int r1=min(p,q)-commonDiff;  //r1=3, p=5,q=7 
    count++;
    
    int r2=max(p,q)+commonDiff;  //5,7,9
    if(r1!=r2){
        count++;
    }
    
    
    for(int i=min(p,q);i<max(p,q);i++){  //5-7 i=6  p=5 q=7  6-5==7-6  6,1 
        if(i-p==q-i){
            count++;
        }
    }

    
    
    return count;
    

}

int main(){

    int ans=differenceEquals(5,7);
    cout<<ans<<endl;

}