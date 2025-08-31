#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		int n=s.size();
		stack<char>st;
		int count=0;
		for(int i=0;i<n;i++){
			char curr=s[i];
			if(st.size()>0 && ((st.top()=='1' && curr=='0') || (st.top()=='0' && curr=='1'))){
				st.pop();
				count++;
			}
			else{
				st.push(curr);
			}
		}
//		cout<<count<<endl;
		if(count%2==0){
			cout<<"NET"<<endl;
		}
		else{
			cout<<"DA"<<endl;
		}
	}
}
