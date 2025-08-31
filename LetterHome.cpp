#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,s;cin>>n>>s;
		vector<int>vec(n);
		for(int i=0;i<n;i++){
			cin>>vec[i];
		}
		int ans=0;
		if(abs(s-vec[n-1])<abs(s-vec[0])){
			ans=abs(s-vec[n-1])+abs(vec[n-1]-vec[0]);
		}
		else{
			ans=abs(s-vec[0])+abs(vec[n-1]-vec[0]);
		}
		cout<<ans<<endl;
	}
}
