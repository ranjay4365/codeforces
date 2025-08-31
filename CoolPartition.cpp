#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>vec;
		while(n--){
			int a;cin>>a;
			vec.push_back(a);
		}
		int req=vec[0];
		int ans=0;
		for(int i=0;i<vec.size();i++){
			if(req==vec[i]){
				ans++;
			}
		}
		cout<<ans<<endl;
	}
}
