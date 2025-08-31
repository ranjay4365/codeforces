#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,q;cin>>n>>q;
		int totSum=0;
		vector<int>vec(n);
		vector<int>preSum;
		preSum.push_back(0);
		for(int i=0;i<n;i++){
			cin>>vec[i];
			totSum+=vec[i];
			preSum.push_back(totSum);
		}
		for(int i=0;i<q;i++){
			int l,r,k;cin>>l>>r>>k;
			int sum1=totSum-(preSum[r]-(preSum[l-1]));
			int sum2=k*(l-r+1);
			if((sum1+sum2)%2==0){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
		}
	}
}
