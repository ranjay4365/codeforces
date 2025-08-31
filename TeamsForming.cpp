#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	vector<int>vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	sort(vec.begin(),vec.end());
	int ans=0;
	for(int i=0;i<n;i+=2){
		ans+=(abs(vec[i+1]-vec[i]));
	}
	cout<<ans;
}
