#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int count=0;
		vector<long long>prefix;
		while(n--){
			int a;cin>>a;
			if(a==2){
				count++;
			}
			prefix.push_back(count);
		}
//		bool flag=false;
		int ans=0;
		for(int i=0;i<prefix.size();i++){
			if(prefix[i]==count-prefix[i]){
				ans=i+1;
				break;
			}
		}
		if(ans){
			cout<<ans<<endl;
		}
		else{
			cout<<-1<<endl;
		} 
	}
}
