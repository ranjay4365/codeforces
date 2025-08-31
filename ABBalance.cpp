#include<bits/stdc++.h>
using namespace std;
bool checkEqual(string s){
	int AB=0,BA=0;
	int n=s.size();
	for(int i=0;i<n-1;i++){
		if(s[i]=='a' && s[i+1]=='b'){
			AB++;
		}
		else if(s[i]=='b' && s[i+1]=='a'){
			BA++;
		}
	}
	if(AB==BA){
		return true;
	}
	return false;
	
}
int main(){
	int t;cin>>t;
	while(t--){
		
		string s;cin>>s;
		int AB=0,BA=0;
		int n=s.size();
//		vector<int>abVec;
//		vector<int>baVec;
		
		if(checkEqual(s)){
			cout<<s<<endl;
		}
		else{
			if(s[0]=='a'){
				s[0]='b';
			}
			else{
				s[0]='a';
			}
			
			bool flag=true;
			if(checkEqual(s)){
				flag=false;
				cout<<s<<endl;
			}
			if(s[0]=='a'){
				s[0]='b';
			}
			else{
				s[0]='a';
			}
			if(s[n-1]=='a'){
				s[n-1]='b';
			}
			else{
				s[n-1]='a';
			}
			
			if(checkEqual(s) && flag){
				cout<<s<<endl;
			}
			if(s[n-1]=='a'){
				s[n-1]='b';
			}
			else{
				s[n-1]='a';
			}
		}
	}
}
