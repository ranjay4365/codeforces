//SquareorNot
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string s;cin>>s;
		int sr=sqrt(n);
		if((sr*sr)!=n){
			cout<<"NO"<<endl;
		}
		else{
			int count=0;
			for(int i=0;i<n;i++){
				if(s[i]=='0'){
					count++;
				}
			}
			if(count==(sr-2)*(sr-2)){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
	}
}
