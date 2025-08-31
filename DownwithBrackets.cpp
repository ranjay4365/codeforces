//DownwithBrackets
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		int totOpens=0;
//		queue<char>q;
		string temp="";
		for(int i=1;i<s.size()-1;i++){
			temp+=s[i];
		}
//		cout<<
		
		stack<char>st;
		int i=0;
		while(i<temp.size()){
			if(st.size()==0){
				st.push(temp[i]);
			}
			else if(st.size()>0 && st.top()=='(' && temp[i]==')'){
				st.pop();
			}
			else{
				st.push(temp[i]);
			}
			i++;
		}
//		cout<<st.size()<<endl;
		if(st.size()==0){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}	
	}
}
