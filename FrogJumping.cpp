#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long a,b,k;cin>>a>>b>>k;
		long long div=k/2;
		if(k%2!=0){
			div++;
		}
		long long ans= (div*a - ((k-div)*b));
		cout<<ans<<endl;
	}
	
	
}
