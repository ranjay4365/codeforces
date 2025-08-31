#include<bits/stdc++.h>
using namespace std;
string reverse(string &s,int j){
	int i=0;
	while(i<=j){
		swap(s[i],s[j]);
		i++;
		j--;
	}
	return s;
}
int main(){
	int n;cin>>n;
	string s;cin>>s;
	for(int i=0;i<n;i++){
		if(n%(i+1)==0){
			reverse(s,i);
		}
	}
	cout<<s<<endl;
}
