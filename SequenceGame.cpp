#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>ans;
		int i=0;
		while(i<n){
			int a;cin>>a;
			if(i==0){
				ans.push_back(a);
				
			}
			else if(a>=ans[ans.size()-1]){
				ans.push_back(a);
				
			}
			else{
				ans.push_back(a);
				ans.push_back(a);
				
			}
			i++;
		}
		cout<<ans.size()<<endl;
		for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		
	}
}
