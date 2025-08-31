#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int y=0;
		int x=(n-(k*y));
		bool flag=false;
		if(x%2==0){
			flag=true;		
		}
		y=1;
		while(x%2!=0 && x>=0){
			x=(n-(k*y));
			if(x%2==0){
				flag=true;
				break;
			}
			y++;
		}
		if(flag){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
