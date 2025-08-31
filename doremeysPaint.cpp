// Doremy's Paint 3
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		map<int,int>mp;
		int n;cin>>n;
		while(n--){
			int a;cin>>a;
			mp[a]++;
		}
		if(mp.size()>2){
			cout<<"NO"<<endl;
		}
		else if(mp.size()==1){
			cout<<"YES"<<endl;
		}
		else{
			int first=0;
			int second=0;
			int count=0;
			for(auto &it:mp){
				if(count==0){
					first=it.second;
				}
				else{
					second=it.second;
				}
				count++;
			}
			if(abs(first-second)<=1){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
	}
}
