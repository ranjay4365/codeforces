#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s,t;cin>>s>>t;
		unordered_map<char,int>mp1;
		unordered_map<char,int>mp2;
		for(int i=0;i<s.size();i++){
			mp1[s[i]]++;
		}
		for(int j=0;j<t.size();j++){
			mp2[t[j]]++;
		}
		string temp="";
		for(int i=0;i<s.size();i++){
			if(mp2.find(s[i])!=mp2.end()){
				if(mp1[s[i]]==mp2[s[i]]){
					temp+=s[i];
					mp1[s[i]]--;
					mp2[s[i]]--;
					if(mp1[s[i]]==0){
						mp1.erase(s[i]);
					}
					if(mp2[s[i]]==0){
						mp2.erase(s[i]);
					}
				}
				else{
					mp1[s[i]]--;
					if(mp1[s[i]]==0){
						mp1.erase(s[i]);
					}
				}
			}
		}
		if(temp==t){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	
}
