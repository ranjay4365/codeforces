#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;cin>>n;
	vector<long long>vec(n);
	for(long long i=0;i<n;i++){
		cin>>vec[i];
	}
//	4 7 12 100 150 199
	long long ans=0;
	long long i=0,j=0;
	while(j<n){
		if(vec[j]<=vec[j-1]*2){
			
			ans=max(j-i+1,ans);
		}
		else{
			i=j;
			
		}
		j++;
	}
	ans=max(j-i,ans);
	cout<<ans;
}
