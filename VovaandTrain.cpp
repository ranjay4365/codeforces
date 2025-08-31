#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,v,li,ri;
		cin>>n>>v>>li>>ri;
//		int count=0;
		if(v==1){
			int ans=((li-1)+(n-ri));
			cout<<ans<<endl;	
		}
		else{
			long long total=n/v;
			int ans=total-(ri/v)+((li-1)/v);
			
			cout<<ans<<endl;	
		}
			
	}
}
