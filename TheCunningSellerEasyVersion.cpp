#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;cin>>t;
	while(t--){
		long long n;cin>>n;
		vector<long long>vec(32);
		vector<long long>calc(32);
		long long num=1;
		for(int i=0;i<32;i++){
			vec[i]= 1LL *num;
			calc[i]= 1LL * num*3 + (1LL *i*(num/3));
			num= (1LL * num * 3);
			
		}
//		for(int i=0;i<32;i++){
//			cout<<vec[i]<<" ";
//		}
//		cout<<endl;
//		for(int i=0;i<32;i++){
//			cout<<calc[i]<<" ";
//		}
//		cout<<endl;
		long long ans=0;
		for(int i=31;i>=0;i--){
			if(n>=vec[i]){
//				cout<<vec[i]<<endl;
				long long quot=n/vec[i];
				n=(n%vec[i]);
				ans+=(quot*calc[i]);
			}
		}
		cout<<ans<<endl;
		
		
		
	}
}
