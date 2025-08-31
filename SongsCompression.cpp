#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;cin>>n>>m;
	vector<long long>vec(n);
	long long sum=0,sum2=0;
	for(int i=0;i<n;i++){
		long long byte,compress;
		cin>>byte>>compress;
		sum+=compress;
		sum2+=byte;
		vec[i]=byte-compress;
	}
	if(sum>m){
		cout<<-1;
	}
	else if(sum2<=m){
		cout<<0;
	}
	else{
		sort(vec.begin(),vec.end());
		int count=0;
		for(int i=n-1;i>=0;i--){
			sum2-=vec[i];
			count++;
			if(sum2<=m){
				break;
			}
		}
		cout<<count;
	}	
}
