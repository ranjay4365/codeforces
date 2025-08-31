/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	vector<int>vec(n);
	unordered_map<long long,long long>mp;
	long long sum=0;
	for(int i=0;i<n;i++){
		cin>>vec[i];
		sum+=vec[i];
		mp[vec[i]]++;
	}
	vector<int>ans;
	for(int i=0;i<n;i++){
		long long temp=sum-vec[i];
		if(temp%2==0 && mp.find(temp/2)!=mp.end() && (mp[temp/2]>1 || (temp/2)!=vec[i])){
			ans.push_back(i+1);
		}
	}
	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
}
