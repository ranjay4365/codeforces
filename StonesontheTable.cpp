#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	string s="";
	while(n--){
		char ch;cin>>ch;
		s+=ch;
	}
	int count=0;
	for(int i=0;i<s.size()-1;i++){
		if(s[i]==s[i+1]){
			count++;
		}
	}
	cout<<count;
}
