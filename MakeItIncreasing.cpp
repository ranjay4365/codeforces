#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<long long>vec(n);
		for(int i=0;i<n;i++){
			cin>>vec[i];
		}
		int count=0;
		bool flag=true;
		for(int i=n-2;i>=0;i--){
			if(vec[i]>=vec[i+1]){
				if(vec[i+1]==0){
					flag=false;
				}
				while(vec[i]!=0 && vec[i]>=vec[i+1]){
					count++;
					vec[i]/=2;
				}
			}
		}
		if(flag){
			cout<<count<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
}
