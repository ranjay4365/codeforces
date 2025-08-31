#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;cin>>s;
	string t;cin>>t;
	int i=t.size()-1;
	int j=s.size()-1;
	while(i>=0 && j>=0 && t[i]==s[j]){
		i--;
		j--;
	}
//	cout<<i<<" "<<j<<endl;
	cout<<j+i+2;
	
}
