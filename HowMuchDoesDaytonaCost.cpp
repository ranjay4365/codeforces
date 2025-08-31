#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
//		map<int,int>mp;
		bool find=false;
		
		for(int i=0;i<n;i++){
			int a;cin>>a;
			if(a==k){
				find=true;
			}
		}
		if(find){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
