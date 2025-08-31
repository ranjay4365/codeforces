#include<bits/stdc++.h>
using namespace std;
int strToint(string s){
	int num=0;
	for(int i=0;i<s.size();i++){
		int a=s[i]-'0';
		num=num*10+a;
	}
	return num;
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		int n=strToint(s);
		int pSq=sqrt(n);
		if(pSq*pSq!=n){
			cout<<-1<<endl;
		}
		else{
			cout<<0<<" "<<pSq<<endl;
		}
	}
}
