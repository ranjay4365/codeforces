#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>vec(n);
		for(int i=0;i<n;i++){
			cin>>vec[i];
		}
		vector<int>ans(3);
		bool flag=false;
		for(int i=1;i<n-1;i++){
			if(vec[i]>vec[i-1] && vec[i]>vec[i+1]){
				flag=true;
				ans[0]=i;
				ans[1]=i+1;
				ans[2]=i+2;
				break;
			}
		}
		if(flag){
			cout<<"YES"<<endl;
			cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
