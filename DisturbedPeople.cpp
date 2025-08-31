#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	vector<int>vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	int count=0;
	for(int i=1;i<n-1;i++){
		if(vec[i-1]==1 && vec[i+1]==1 && vec[i]==0){
			count++;
			vec[i+1]=0;
		}
	}
	cout<<count;
}
