#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;cin>>n>>k;
	string s;cin>>s;
	int i=0,j=n-1;
	set<char>st;
	while(i<j){
		if(s[i]!=s[j]){
			break;
		}
		st.insert(s[i]);
		st.insert(s[j]);
		i++;
		j--;
	}
	st.insert(s[i]);
//	cout<<i<<" "<<j<<endl;
	if(i>=j){
		char ch=s[0];
		if(st.size()>1){
			int a;
			for(a=0;a<n;a++){
				if(s[a]!=ch){
					break;
				}
			}
			string sub=s.substr(a,n-a);
			for(a=0;a<k-1;a++){
				s+=sub;
			}
			cout<<s;
		}
		else{
			for(int a=0;a<k-1;a++){
				s+=ch;
			}
			cout<<s;
		}
		
	}
	else{
		string sub=s.substr(i,n-i);
		for(int a=0;a<k-1;a++){
			s+=sub;
		}
		cout<<s;
	}
}
