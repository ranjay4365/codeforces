#include<iostream>
#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<int,int>mp;
    mp.insert({6,7});
    //cout<<mp[6];

    vector<int>vec{1,2,3,4,5};

    unordered_map<int,int> mp2;
    for (int i = 0; i < vec.size(); i++)
    {
        mp2[i]=vec[i];
    }
    // for (int i = 0; i < mp2.size(); i++)
    // {
    //     cout<<mp2[i]<<" ";  //mp[0]=0 toh koi key nhi hai isliye do 0's print hue 
    // }

    for(auto it:mp2){
        cout<<it.first<<endl; 
    }
    
    
}

