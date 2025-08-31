#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,l,r;cin>>n>>l>>r;
	string s;cin>>s;
	bool flag=true;
	for(int i=l-1;i<=r-1;i++){
		if(s[i]=='x'){
			flag=false;
//			break;
		}
	}
	if(flag){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
}
