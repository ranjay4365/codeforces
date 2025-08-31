#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;
		vector<long long>vec(n);
		for(int i=0;i<n;i++)cin>>vec[i];
		long long ans=INT_MAX;
		for(long long i=0;i<n;i++){
			long long idx=i+1;
			long long diff=abs(idx-vec[i]);
			if(diff>0){
				ans=min(diff,ans);
			}
		}
		
		for(long long i=0;i<n;i++){
			long long idx=i+1;
			long long diff=abs(idx-vec[i]);
			if(diff>0 && diff%ans!=0){
				
				ans=min(diff%ans,ans);
			}
		}
		
		cout<<ans<<endl;

	}
}
 
