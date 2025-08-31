#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;cin>>n>>k;
	string s;cin>>s;
	map<char,vector<int>>mp;
	for(int i=0;i<n;i++){
		mp[s[i]].push_back(i);
	}
	for(auto &it:mp){
		
			for(int i=0;i<it.second.size();i++){
				s[it.second[i]]='#';
				k--;
				if(k==0) break;
			}
			if(k==0) break;
		
	}
	string ans="";
	for(int i=0;i<n;i++){
		if(s[i]!='#'){
			ans+=s[i];
		}
	}
	cout<<ans;
}
