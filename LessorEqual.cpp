#include<bits/stdc++.h>
using namespace std;
int isTrue(vector<int>vec,int k,int mid){
	int count=0;
	for(int i=0;i<vec.size();i++){
		if(mid>=vec[i]){
			count++;
		}
	}
	return count;
}
int main(){
	int n,k;cin>>n>>k;
	vector<int>vec(n);
	int maxi=0;
	for(int i=0;i<n;i++){
		cin>>vec[i];
		maxi=max(maxi,vec[i]);
	}
	
	int i=1,j=maxi+1;
	
	int ans=-1;
	while(i<j){
		int mid=i+(j-i)/2;
		if(isTrue(vec,k,mid)==k){
			ans=mid;
			break;
		}
		else if(isTrue(vec,k,mid)>k){
			j=mid;
		}
		else{
			i=mid+1;
		}
	}
	cout<<ans<<endl;
}
