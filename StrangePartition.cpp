#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long n,x;cin>>n>>x;
		vector<long long>vec(n);
		long long sum=0;
		long long larg=0;
		for(int i=0;i<n;i++){
			cin>>vec[i];
			sum+=vec[i];
			long long temp=vec[i]/x;
			if(vec[i]%x!=0){
				temp++;
			}
			larg+=temp;
		}
		long long mini=sum/x;
		if(sum%x!=0){
			mini++;
		}
		cout<<mini<<" "<<larg<<endl;
	}
}
