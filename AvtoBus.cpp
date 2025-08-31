#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;
		
		if(n%2!=0){
			cout<<-1<<endl;
		}
		else{
			long long maxi=n/4;
			long long mini=n/6;
			if(maxi%4!=0){
				maxi++;
			}
			if(mini%6!=0){
				mini++;
			}
			if(mini==0){
				mini=maxi;
			}
			if(maxi==0){
				maxi=mini;
			}
			
			cout<<mini<<" "<<maxi<<endl;
		}
		
		
	}
}
