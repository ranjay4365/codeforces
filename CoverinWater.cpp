//CoverinWater
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string s;cin>>s;
		int count=0,dots=0;
		bool flag=false;
		for(int i=0;i<n;i++){
			
			if(s[i]=='#'){
				count=0;
			}
			else{
				dots++;
				count++;
				if(count==3){
					flag=true;
					break;
					
				}
			}
		}
		if(flag){
			cout<<2<<endl;
		}
		else{
			cout<<dots<<endl;
		}
	}
}
