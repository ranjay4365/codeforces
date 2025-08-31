#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		string s;cin>>s;
		vector<int>vec(26);
		for(int i=0;i<n;i++){
			vec[s[i]-'a']++;
		}
		int oddCount=0;
		for(int i=0;i<26;i++){
			if(vec[i]%2!=0){
				oddCount++;
			}
		}
		if(k<oddCount-1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
//			for(int i=0;i<n;i++){
//				if(vec[i]%2!=0 && k>0){
//					vec[i]-=1;
//					k--;
//					oddCount--;
//				}
//			}
//			if
		}
		
		
	}
}
