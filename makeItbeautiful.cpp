#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>vec(n);
		for(int i=0;i<n;i++) cin>>vec[i];
		int sum=0;
		for(int i=0;i<n-1;i++){
			sum+=vec[i];
			if(sum==vec[i+1]){
				swap(vec[i],vec[i+1]);
				sum-=vec[i+1];
				sum+=vec[i];
				
			}
		}
		sum=0;
		bool flag=true;
		for(int i=0;i<n-1;i++){
			sum+=vec[i];
			if(sum==vec[i+1]){
				flag=false;
				cout<<"NO"<<endl;
				break;
			}
		}
		if(flag){
			cout<<"YES"<<endl;
			for(int i=0;i<vec.size();i++){
				cout<<vec[i]<<" ";
			}
			cout<<endl;
		}
		
		 
	}
}
//3 3 6 6
//1 2 3 4 5
//1 3 
//1 3 2 4 5 
