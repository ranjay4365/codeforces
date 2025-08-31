#include<bits/stdc++.h>
using namespace std;
bool isExtremelyRound(int n){
	int count=0;
	while(n>0){
		if(n%10!=0){
			count++;
		}
		n/=10;
	}
	if(count>1){
		return false;
	}
	else{
		return true;
	}
}
int main(){
	vector<int>vec;
	int count=0;
	for(int i=1;i<=999999;i++){
		if(isExtremelyRound(i)){
			count++;
		}
		vec.push_back(count);
	}
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		cout<<vec[n-1]<<endl;
	}
	
}
