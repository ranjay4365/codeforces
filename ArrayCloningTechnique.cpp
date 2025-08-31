#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        vector<long long>vec(n);
        unordered_map<long long,long long>mp;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            mp[vec[i]]++;
        }
        long long maxOcc=0;
        for(auto &it:mp){
            maxOcc=max(it.second,maxOcc);
        }
        long long ans=0;
        while(maxOcc!=n){
            ans+=1;
            long long req=n-maxOcc;
            if(maxOcc<=req){
                ans+=maxOcc;
                maxOcc+=maxOcc;
            }
            else{
                ans+=req;
                maxOcc+=req;
            }
        }
        cout<<ans<<endl;

    }
}