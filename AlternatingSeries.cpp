#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>vec(n);
		if(n%2==0){
			vec[n-1]=2;
			int a=-1,b=3;
			for(int i=0;i<n-1;i++){
				if(i%2==0){
					vec[i]=a;
				}
				else{
					vec[i]=b;
				}
			}
			
		}
		else{
			int a=-1,b=3;
			for(int i=0;i<n;i++){
				if(i%2==0){
					vec[i]=a;
				}
				else{
					vec[i]=b;
				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<vec[i]<<" ";
		}
		cout<<endl;
	}
}
