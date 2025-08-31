#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		string s;cin>>s;
		int z=0,o=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='0'){
				z++;
			}
			else{
				o++;
			}
		}
		z/=2;
		o/=2;
		if((z==0 || o==0) && z+o!=k){
			cout<<"NO"<<endl;
		}
		else if(((z+o)%2==0 && k%2==0)|| ((z+o)%2!=0 && k%2!=0)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		
	}
}
