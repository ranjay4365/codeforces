#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long a,b,n;cin>>a>>b>>n;
		vector<int>vec(n);
		
		for(int i=0;i<n;i++){
			cin>>vec[i];
		}
		sort(vec.begin(),vec.end());
		long long ans=b-1;
		for(int i=0;i<n-1;i++){
			if(vec[i]<a){
				ans+=vec[i];
			}
			else{
				ans+=(a-1);
			}
		}
		if(vec[n-1]<a){
			ans+=vec[n-1];
		}
		else{
			ans+=a;
		}
		
		cout<<ans<<endl;
		
	}
}
