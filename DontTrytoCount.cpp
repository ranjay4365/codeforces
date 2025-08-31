#include<bits/stdc++.h>
using namespace std;
bool isSubstring(string s1,string s2){
	if(s1.size()>s2.size()){
		return false;
	}
	int i=0,j=0;
	string temp="";
	while(j<s2.size()){
		temp+=s2[j];
		if(j-i+1<s1.size()){
			j++;
		}
		else if(j-i+1==s1.size()){
			if(temp==s1){
				return true;
			}
			temp.erase(temp.begin());
			i++;
			j++;
		}
	}
	return false;
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		string x,s;cin>>x>>s;
//		string x0,x1,x2,x3,x4,x5;
		string x0=x;
		string x1=x0+x0;
		string x2=x1+x1;
		string x3=x2+x2;
		string x4=x3+x3;
		string x5=x4+x4;
		int ans=-1;
		if(isSubstring(s,x0)){
			ans=0;
		}
		else if(isSubstring(s,x1)){
//			cout<<1<<endl;
			ans=1;
		}
		else if(isSubstring(s,x2)){
			ans=2;
		}
		else if(isSubstring(s,x3)){
			ans=3;
		}
		else if(isSubstring(s,x4)){
			ans=4;
			
		}
		else if(isSubstring(s,x5)){
			ans=5;
		}
		cout<<ans<<endl;
		
		
	}
}
