#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string s;cin>>s;
//		set<int>st;
		int start=1;
//		st.insert(1);
		int maxStart=1;
		char si=s[0];
		for(int i=0;i<n;i++){
			if(s[i]==si){
				start++;
			}
			else{
				si=s[i];
				start=1;
				start++;
				
			}
			maxStart=max(start,maxStart);
		}
		cout<<maxStart<<endl;
	}
}
