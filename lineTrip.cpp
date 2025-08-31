#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int x;cin>>x;
		set<int>st;
		while(n--){
			int a;cin>>a;
			st.insert(a);
		}
		int ans=0;
		int count=0;
		vector<int>dist;
		for(int i=0;i<=x;i++){
			dist.push_back(i);	
		}
		int i=0,j=0;
		while(j<x){
			if(st.find(j)!=st.end()){
				ans=max(j-i,ans);
				i=j;
			}
			j++;
		}
		
		ans=max((j-i)*2,ans);
		cout<<ans<<endl;
	}
	
}
