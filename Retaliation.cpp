#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>vec;
		int larg=0;
		while(n--){
			int a;cin>>a;
			larg=max(larg,a);
			vec.push_back(a);
		}
		int req1=0,req2=0;
		for(int i=0;i<vec.size();i++){
			if(vec[i]==larg){
				req1=larg/(i+1);
				req2=larg/(vec.size()-i);
			}
		}
//		cout<<req1<<" # "<<req2<<" # "<<endl;
		n=vec.size();
		bool flag1=true;
		bool flag2=true;
		for(int i=0;i<vec.size();i++){
			if((i+1)*req1+(n-i)!=vec[i]){
				flag1=false;
				break;
			}
		}
		for(int i=0;i<vec.size();i++){
			if(req2*(n-i)+(i+1)!=vec[i]){
				flag2=false;
				break;
			}
		}
		if(flag1||flag2){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		
	}
}
