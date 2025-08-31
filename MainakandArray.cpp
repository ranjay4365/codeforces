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
		int maxDiff=0;
		for(int i=0;i<n;i++){
			int diff=abs(vec[n-1]-vec[i]);
			maxDiff=max(maxDiff,diff);
		}
		for(int i=n-1;i>=0;i--){
			int diff=abs(vec[0]-vec[i]);
			maxDiff=max(maxDiff,diff);
		}
		cout<<maxDiff<<endl;
	}
}
