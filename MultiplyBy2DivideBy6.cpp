#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;
		long long count=0;
		long long ans=0;
		while(count<2 && n>1){
			if(n%6==0){
				count=0;
				n/=6;
			}
			else{
				n=1LL*n*2;
				count++;
			}
			ans++;
		}
		if(n==1){
			cout<<ans<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
}
