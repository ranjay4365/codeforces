#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int odd=0,even=0;
		while(n--){
			int a;cin>>a;
			if(a%2==0){
				even+=a;
			}
			else{
				odd+=a;
			}
		}
		if((even==1 && odd==1) || (even%2==0 && odd%2!=0)){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
		
	}
}
