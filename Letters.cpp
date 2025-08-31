#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;cin>>n>>m;
	vector<long long>dor(n);
	
	vector<long long>prefix;
	prefix.push_back(0);
	
	long long sum=0;
	vector<long long>letters(m);
	
	for(int i=0;i<n;i++){
		cin>>dor[i];
		sum+=dor[i];
		prefix.push_back(sum);
	}
	for(int i=0;i<m;i++)cin>>letters[i];
	
	int i=0,j=0;
	while(j<m){
		while(prefix[i]<letters[j]){
			i++;
		}
		cout<<i<<" "<<letters[j]-prefix[i-1]<<endl;
		j++;
	}
	return 0;
}

//0 10 25 37
//1 9 12 23 26 37

//using binary search
//int solve(vector<long long>prefix,long long k){
//	int i=1,j=prefix.size()-1;
//	int ans=j+1;
//	while(i<=j){
//		int mid=i+(j-i)/2;
//		if(prefix[mid]>=k){
//			ans=mid;
//			j=mid-1;
//		}
//		else{
//			i=mid+1;
//		}
//	}
//	return ans;
//	
//}
//int main(){
//	int n,m;cin>>n>>m;
//	vector<long long>dor(n);
//	
//	vector<long long>prefix;
//	prefix.push_back(0);
//	
//	long long sum=0;
//	vector<long long>letters(m);
//	
//	for(int i=0;i<n;i++){
//		cin>>dor[i];
//		sum+=dor[i];
//		prefix.push_back(sum);
//	}
//	for(int i=0;i<m;i++)cin>>letters[i];
//	
//	for(int i=0;i<m;i++){
//		int ans=solve(prefix,letters[i]);
//		cout<<ans<<" "<<letters[i]-prefix[ans-1]<<endl;
//	}
//	return 0;
//}
