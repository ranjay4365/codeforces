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
		for(int i=1;i<n;i++){
			if(vec[i-1]==1){
				while(vec[i]%vec[i-1]==0){
					vec[i-1]++;
				}
			}
			else if(vec[i]%vec[i-1]==0){
				while(vec[i]%vec[i-1]==0){
					vec[i]++;
				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<vec[i]<<" ";
		}
		cout<<endl;
	}
}
