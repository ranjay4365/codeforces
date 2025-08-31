#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long n,k;cin>>n>>k;
		long long s=n*k;
		vector<int>vec(s);
		for(int i=0;i<s;i++){
			cin>>vec[i];
		}
		long long pick=(n/2)+1;
		long long count=0,ans=0;
		
		for(long long i=s-1;i>=0 && k>0;i--){
			count++;
			if(count==pick){
				ans+=vec[i];
				count=0;
				k--;
			}
		}
		cout<<ans<<endl;
	}
}
