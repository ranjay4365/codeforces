#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>vec(n);
		for(int i=0;i<n;i++){
			cin>>vec[i];
		}
		int i=0,j=0;
		int count=0;
		while(j<n && vec[j]==0){
			j++;
		}
		while(j<n){
//			0 1 2 0 3 4 0 4 4 4
			if(j<n && vec[j]>0){
				count++;
				while(j<n && vec[j]>0){
					j++;
				}
			}
			else{
				j++;
			}
		}
		if(count<=1){
			cout<<count<<endl;
		}
		else{
			cout<<2<<endl;
		}
	}
}
