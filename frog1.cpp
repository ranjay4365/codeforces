#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&vec,int i,int n,vector<int>&dp){
	if(i>=n-1){
		return 0;
	}
	if(dp[i]!=-1){
		return dp[i];
	}
	int x=INT_MAX;
	if(i<n){
		x=abs(vec[i]-vec[i+1])+solve(vec,i+1,n,dp);
	}
	int y=INT_MAX;
	if(i<n-1){
		y=abs(vec[i]-vec[i+2])+solve(vec,i+2,n,dp);
	}
	return dp[i]=min(x,y);
//	int minimum=min(solve(vec,i+1,score),solve(vec,i+2,score));
//	score+=abs(vec[i]-minimum);
//	return score+=abs(vec[i]-min(solve);
//	cout<<score<<endl;
	
}
int main(){
	int n;cin>>n;
	vector<int>vec(n);
	vector<int>dp(n,-1);
	for(int i=0;i<n;i++) cin>>vec[i];
	int i=0;
	int ans=solve(vec,i,n,dp);
	cout<<ans;
}
//10 30 40 20
// 20 + 10 = 30
// 10 10

//10 30                                 10 40 
//20     									30     
//30 40  30 20						  40 20   40..
//20+10  20+10                          30+10
//40 20   40 ...
//20+10+20  
