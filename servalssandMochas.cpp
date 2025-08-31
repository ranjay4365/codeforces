#include<bits/stdc++.h>
using namespace std;
int calcGcd(int a,int b){
	while(b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
//	cout<<a<<endl;
	return a;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>vec(n);
		bool flag=false;
		for(int i=0;i<n;i++) {
			cin>>vec[i];
			if(vec[i]==1){
				flag=true;
			}	
		}
		if(flag){
			cout<<"YES"<<endl;
		}
		else{
			bool temp=false;
			for(int i=0;i<n-1;i++){
				for(int j=i+1;j<n;j++){
					if(calcGcd(vec[i],vec[j])<=2){
						temp=true;
						break;
					}
				}
			}
			if(temp){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		
	}
}
