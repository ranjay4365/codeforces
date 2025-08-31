#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,x;cin>>n>>x;
		vector<int>vec;
		while(n--){
			int a;cin>>a;
			vec.push_back(a);
		}
		int curr=-1;
		for(int i=0;i<vec.size();i++){
			if(vec[i]==1){
				curr=i;
				break;
			}
		}
		for(int i=0;i<x;i++){
			if(curr<vec.size()){
				vec[curr]=0;
				curr++;
			}
			
		}
		bool flag=true;
		for(int i=0;i<vec.size();i++){
			if(vec[i]==1){
				flag=false;
				break;
			}
		}
		if(flag){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
