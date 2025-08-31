#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long a,b;cin>>a>>b;
		long long gcd=abs(a-b);
		if(gcd==0){
			cout<<0<<" "<<0<<endl;
		}
		else{
			long long rem=a%gcd;
			if(rem==0){
				cout<<gcd<<" "<<0<<endl;
			}
			else{
				cout<<gcd<<" "<<min(rem,(gcd-rem))<<endl;
			}
		}
			
		
	}
}
