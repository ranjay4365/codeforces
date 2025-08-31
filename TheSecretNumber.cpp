#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;cin>>t;
	while(t--){
		long long n;cin>>n;
		vector<long long>vec;
		long long temp=n;
		int count=0;
		while(temp>0){
			count++;
			temp/=10;
		}
		long long num=1;
		for(int i=1;i<=count;i++){
			num=num*10;
			long long temp1=num+1;
			if(n%temp1==0){
				vec.push_back(n/temp1);
			}
		}
		sort(vec.begin(),vec.end());
		cout<<vec.size()<<endl;
		if(vec.size()>0){
			for(int i=0;i<vec.size();i++){
				cout<<vec[i]<<" ";
			}
			cout<<endl;
		}
		
	}
}
