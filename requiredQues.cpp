#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k,x;cin>>n>>k>>x;
		if(k==1 && k==x){
			cout<<"NO";
		}
		else if(k!=x){
			if(n%k==0){
				cout<<"YES"<<endl;
				vector<int>vec;
				for(int i=0;i<n/k;i++){
					vec.push_back(k);
				}
			}
			else{
				int req=n%k;
				if(req!=x && req<k){
					cout"YES";
					vector<int>vec;
					for(int i=0;i<n/k;i++){
						vec.push_back(k);
					}
					vec.push_back(req);
				}
				
			}
			
		}
	}
}
