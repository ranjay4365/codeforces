//Helpful Maths
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;cin>>s;
	string temp="";
	for(int i=0;i<s.size();i++){
		if(s[i]=='+'){
			continue;
		}
		else{
			temp+=s[i];
		}
	}
	sort(temp.begin(),temp.end());
	string ans="";
	for(int i=0;i<temp.size();i++){
		ans+=temp[i];
		ans+='+';
	}
	string ANS=ans.substr(0,ans.size()-1);
	cout<<ANS;
}
