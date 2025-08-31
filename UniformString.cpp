#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		string ans="";
		int div=n/k;
		char ch='a';
		for(int i=0;i<k;i++){
			
			for(int j=0;j<div;j++){
				ans+=ch;
			}
			ch++;
		}
		ch--;
		while(ans.size()<n){
			ans+=ch;
		}
		cout<<ans<<endl;
	}
}
