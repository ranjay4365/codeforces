#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		vector<int>vec(n);
		int i=0;
		while(n--){
			cin>>vec[i];
			i++;
		}
		if(k>1){
			cout<<"YES"<<endl;
		}
		else if(k==1){
			bool flag=true;
			for(int i=0;i<vec.size()-1;i++){
				if(vec[i]>vec[i+1]){
					flag=false;
					cout<<"NO"<<endl;
					break;
				}
			}
			if(flag==true){
				cout<<"YES"<<endl;
			}
		}
	}
}
