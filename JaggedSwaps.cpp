//jagged swaps
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int num;cin>>num;
//		vector<int>vec(num);
		int i=0,first=0;
		while(num--){
			int a;cin>>a;
			if(i==0){
				first=a;
			}
			i++;
		}
		if(first==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
