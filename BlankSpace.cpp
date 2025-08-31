#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int ans=0,count=0;
		while(n--){
			int a;cin>>a;
			if(a==1){
				ans=max(ans,count);
				count=0;
			}
			else{
				count++;
			}
		}
		ans=max(count,ans);
		cout<<ans<<endl;
	}
}
