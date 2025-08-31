#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&vec,int &score,int &ans,int n,int i,vector<int>&dp){
	if(i>=n-1){
		score+=abs(vec[n-1]-vec[i]);
		ans=min(score,ans);
		score-=abs(vec[n-1]-vec[i]);
		return;
	}
	if(dp[i]!=-1){
		score=dp[i];
		return;
	}
	for(int j=i+1;j<=i+2 && j<n;j++){
		score+=abs(vec[j]-vec[i]);
		dp[j]=score;
		solve(vec,score,ans,n,j,dp);
		score-=abs(vec[j]-vec[i]);
	}
}
int main(){
	int n;cin>>n;
	vector<int>vec(n);
	vector<int>dp(n,-1);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	int score=0;
	int ans=INT_MAX;
	int i=0;
	solve(vec,score,ans,n,i,dp);
	cout<<ans<<endl;
}
