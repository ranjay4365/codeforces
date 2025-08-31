//TwinPermutation
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int req=1+n;
		vector<int>vec(n);
		for(int i=0;i<n;i++){
			cin>>vec[i];
		}
		
		for(int i=0;i<n;i++){
			cout<<req-vec[i]<<" ";
		}
		cout<<endl;
	}
}
