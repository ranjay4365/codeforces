#include<bits/stdc++.h>
using namespace std;

int main(){
	int ans=0;
	int n;cin>>n;
	while(n--){
		int count=0;
		int p,v,c;cin>>p>>v>>c;
		if(p==1) count++;
		if(v==1) count++;
		if(c==1) count++;
		if(count>=2){
			ans++;
		}
	}
	cout<<ans;
}
