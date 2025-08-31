#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>vec,int n,int i,int k,int &score,int &ans,vector<int>&dp){
	if(i==n){
		ans=min(score,ans);
		return;
	}
//	if(dp[i]!=-1){
//		
//	}
	for(int j=i+1;j<=i+k && j<n;j++){
		score+=abs(vec[j]-vec[i]);
		solve(vec,n,j,k,score,ans,dp);
		score-=abs(vec[j]-vec[i]);
	}
}
int main(){
	int n,k;cin>>n>>k;
	vector<int>vec(n);
	vector<int>dp(n+1,-1);
	for(int i=0;i<n;i++)cin>>vec[i];
	int score=0,ans=INT_MAX;
	int i=0;
	solve(vec,n,i,k,score,ans,dp);
	cout<<ans<<endl;
	
}
