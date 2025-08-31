#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;cin>>s1>>s2;
	bool flag=false;
	for(int i=0;i<s1.size();i++){
		if(tolower(s1[i])!=tolower(s2[i])){
			flag=true;
			if(tolower(s1[i])<tolower(s2[i])){
				cout<<"-1";
			}
			else{
				cout<<"1";
			}
			break;
		}
	}
	if(flag==false){
		cout<<"0";
	}
	
}
