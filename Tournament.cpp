#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,j,k;cin>>n>>j>>k;
		vector<int>vec(n);
		int maxi=0;
		for(int i=0;i<n;i++){
			cin>>vec[i];
			maxi=max(vec[i],maxi);
// 			st.insert(vec[i]);
		}
		int ele=vec[j-1];
		if(k==1 && ele!=maxi){
		    cout<<"NO"<<endl;
		}
		else{
		    cout<<"YES"<<endl;
		}
	}
}
