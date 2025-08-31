#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string s;cin>>s;
		map<char,int>mp;
		for(int i=0;i<n;i++) mp[s[i]]++;
		bool flag=false;
		for(int i=1;i<n-1;i++){
			mp[s[i]]--;
			if(mp[s[i]]>0){
				flag=true;
			}
			mp[s[i]]++;
		}
		if(flag){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		
	}
}
//abcdebf
//abcdeb
