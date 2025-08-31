#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,k;cin>>n>>k;
	vector<long long>vec(32);
	for(int i=31;i>=0;i--){
		vec[i]=(1LL<<i);
	}
	int bitCount=0;
//	for(int i=31;i>=0;i--){
//		cout<<vec[i]<<" ";
//	}
	int temp=n;
	priority_queue<int>pq;
	for(int i=31;i>=0;i--){
		if(vec[i]<=n && n!=0){
			n-=vec[i];
			pq.push(vec[i]);
			bitCount++;
		}
	}
//	cout<<endl;
//	cout<<bitCount<<endl;
	if(k>=bitCount && k<=temp){
		cout<<"YES"<<endl;
		while(pq.size()!=k){
			int t=pq.top();
			pq.pop();
			pq.push(t/2);
			pq.push(t/2);
		}
		while(pq.size()>0){
			cout<<pq.top()<<" ";
			pq.pop();
		}
		
	}
	else{
		cout<<"NO";
	}
}
