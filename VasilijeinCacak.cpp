//VasilijeinCacak
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long n,k,x;cin>>n>>k>>x;
		long long sum=0;
		if(k==1 && x>=1 && x<=n){
			cout<<"YES"<<endl;
		}
		else if(k==1 && x>n){
			cout<<"NO"<<endl;
		}
		else{
			int i=1;
			while(n>0 && k>0 && sum<x){
			
				if(n+sum<=x){
					sum+=n;
					k--;
					if(sum==x){
						break;
					}
				}
				n--;
			}
			if(sum==x && k==0){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		
	}
}
