#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		bool flag=true;
		map<int,int>mp;
		vector<int>nums;
		for(int i=0;i<n;i++){
			int a;cin>>a;
			nums.push_back(a);
			mp[a]++;
			if(mp[a]>1){
				flag=false;
			}
		}
		if(!flag){
			cout<<"YES"<<endl;
			for(int i=n-1;i>=0;i--){
				cout<<nums[i]<<" ";
			}
			cout<<endl;
		}
		else{
			vector<int>vec(n);
			int maxCount=0;
			int num=0;
			for(auto &it:mp){
				if(maxCount<=it.second){
					maxCount=it.second;
					num=it.first;
				}
			}
			int i=0;
			while(maxCount>0 && i<n){
				vec[i]=num;
				i+=2;
				maxCount--;
				mp[num]--;
			}
			for(auto &it:mp){
				if(it.second>0){
					int i=1;
					while(it.second>0 && i<n){
						if(vec[i]==0){
							vec[i]=it.first;
							it.second--;
						}
						i++;
					}
				}
			}
			bool temp=true;
			int sum=0;
			for(int i=0;i<vec.size()-1;i++){
				sum+=vec[i];
				if(sum==vec[i+1]){
					temp=false;
				}
			}
			if(temp){
				cout<<"YES"<<endl;
				for(int i=0;i<vec.size();i++){
					cout<<vec[i]<<" ";
				}
				cout<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}	
	}
}
