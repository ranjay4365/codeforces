#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long n,k;cin>>n>>k;
		
		vector<long long>vec(32);
		vector<long long>calc(32);
		long long num=1;
		map<long long,long long>mp;
		mp[1]=3;
		for(int i=0;i<32;i++){
			vec[i]= 1LL *num;
			calc[i]= 1LL * num*3 + (1LL *i*(num/3));
			num= (1LL * num * 3);
			mp[vec[i]]=calc[i];
		}
		long long temp=n;
		priority_queue<long long>pq;
		for(int i=31;i>=0;i--){
			if(vec[i]<=n){
				long long quot=n/vec[i];
				long long rem=n%vec[i];
				for(int j=0;j<quot;j++){
					pq.push(vec[i]);
				}
				n=rem;
			}
		}
		if(k>=temp){
			cout<<(temp*3)<<endl;
		}
		else if(k>=pq.size()) && k<n{
			while((pq.size()+2)<=k && pq.size()<temp){
				long long t=pq.top(); //top element nikaalo
				long long quot=t/3; // divide karo aur push kar do 3 times is quot ko
				for(int i=0;i<3;i++){
					pq.push(quot);
				}
				pq.pop();
			}
			long long ans=0;
			while(pq.size()>0){
				ans+=mp[pq.top()];
				pq.pop();
			}
			cout<<ans<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
}
