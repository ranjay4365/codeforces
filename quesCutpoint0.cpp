#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    float n;
    cin>>n;
    
    string p=to_string(n);  
    int s=p.size();
    for(int i=s-1;i>s-4;i--){
        if(p[i]>'0'){
            break;
        }else if(p[i]=='0'){
            p.erase(i,1);
        }
    }
    n=stof(p);
    cout << n;

    return 0;
}