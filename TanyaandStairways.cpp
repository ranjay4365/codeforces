#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	vector<int>vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	vector<int>ans;
	
	int i=0,j=1;
	while(j<n){
		while(j<n && vec[j]!=1){
			j++;
		}
		if(vec[j]==1){
			ans.push_back(j-i);
			i=j;
			j++;
		}
	}
	ans.push_back(j-i);
	cout<<ans.size()<<endl;
	for(int k=0;k<ans.size();k++){
		cout<<ans[k]<<" ";
	}
}
