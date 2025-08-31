#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	string s;cin>>s;
	string comp="xxx";
	int count=0;
	string temp="";
	int i=0,j=0;
	while(j<n){
		temp+=s[j];
		if(j-i+1<3){
			j++;
		}
		else if(j-i+1==3){
			
			if(temp==comp){
				count++;
			}
			temp.erase(temp.begin());
			i++;
			j++;
		}
	}
	cout<<count;
	
}
