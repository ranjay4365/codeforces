#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		bool flag=false;
		vector<int>vec;
		while(n--){
			int a;cin>>a;
			if(vec.size()==0){
				vec.push_back(a);
			}
			else{
				if(a<vec[vec.size()-1]){
					flag=true;
				}
				vec.push_back(a);
			}
		}
		if(flag){
			cout<<0<<endl;
		}
		else{
			int ans=INT_MAX;
			for(int i=0;i<vec.size()-1;i++){
				int first=vec[i];
				int second=vec[i+1];
				int req=((second-first)/2)+1;
				first+=req;
				second-=req;
				if(first>second){
					ans=min(ans,req);
				}
			}
			cout<<ans<<endl;
		}
		
	}
}
