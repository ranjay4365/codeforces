#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	string s;cin>>s;
	string ans="";
	int count=1;
	for(int i=0;i<n;i+=count){
		ans+=s[i];
		count++;
	}
	cout<<ans;
}
