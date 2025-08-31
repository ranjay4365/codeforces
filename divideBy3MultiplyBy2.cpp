/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int solve(long long n){
    long long count=0;
    while(n%3==0 && n>0){
        count++;
        n/=3;
    }
    return count;
}
int main(){
    int long long n;cin>>n;
    priority_queue<pair<long long,vector<long long>>>pq;
    unordered_map<int,vector<long long>>mp;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        int count=solve(a);
        mp[count].push_back(a);
    }
    for(auto &it:mp){
        sort(it.second.begin(),it.second.end());
        pq.push({it.first,it.second});
    }
    while(pq.size()>0){
        for(int i=0;i<pq.top().second.size();i++){
            cout<<pq.top().second[i]<<" ";
        }
        pq.pop();
    }
}
