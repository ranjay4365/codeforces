#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;cin>>s;
	string t="";
	bool flag=true;
	for(int i=0;i<s.size();i++){
		if(s[i]=='.' && flag==true){
			t.push_back('o');
			flag=false;
		}
		else if(s[i]=='#'){
			t.push_back('#');
			flag=true;
		}
		else{
			t.push_back('.');
		}
	}
	cout<<t<<endl;
}
