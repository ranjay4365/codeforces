#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;
		vector<int>vec;
		long long temp=n;
		while(temp>0){
			vec.push_back(temp%10);
			temp/=10;
		}
		reverse(vec.begin(),vec.end());
		int ans=INT_MAX;
		int s=vec.size();
		for(int i=0;i<s-1;i++){
			for(int j=i+1;j<s;j++){
				if(vec[i]==2 && vec[j]==5){
					int calc= j-i-1 + (s-1-j);
					ans=min(ans,calc);
				}
				
				else if(vec[i]==5 && vec[j]==0){
					int calc= j-i-1 + (s-1-j);
					ans=min(ans,calc);
				}
				
				else if(vec[i]==7 && vec[j]==5){
					int calc= j-i-1 + (s-1-j);
					ans=min(ans,calc);
				}
				else if(vec[i]==0 && vec[j]==0){
					int calc= j-i-1 + (s-1-j);
					ans=min(ans,calc);
				}
			}
		}
		cout<<ans<<endl;
	}
}
