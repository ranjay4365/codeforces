#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
	
		int n;cin>>n;
		vector<int>vec1(n);
		vector<int>vec2(n);
		for(int i=0;i<n;i++){
			cin>>vec1[i];
		}
		for(int i=0;i<n;i++){
			cin>>vec2[i];
		}
		
		int ans=1;
		for(int i=0;i<n;i++){
			if(vec1[i]>vec2[i]){
				ans+=(vec1[i]-vec2[i]);
			}
		}
		cout<<ans<<endl;
	}
}
