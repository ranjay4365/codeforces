#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		vector<int>vec(n);
		for(int i=0;i<n;i++){
			cin>>vec[i];
		}
		sort(vec.begin(),vec.end());
		int count=1,maxCount=1;
		for(int i=0;i<n-1;i++){
			if(vec[i+1]-vec[i]<=k){
				count++;
				maxCount=max(count,maxCount);
			}
			else{
				count=1;
			}
		}
		cout<<n-maxCount<<endl;
		
	}
	
	
	
}
