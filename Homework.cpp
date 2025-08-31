#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string a;cin>>a;
		int m;cin>>m;
		string b,c;cin>>b>>c;
		
		string ans="";
		string beg="";
		string end="";
		for(int i=0;i<m;i++){
			if(c[i]=='V'){
				beg+=b[i];
			}
			else{
				end+=b[i];
			}
		}
		reverse(beg.begin(),beg.end());
		ans=beg+a+end;
		cout<<ans<<endl;
	}
}
