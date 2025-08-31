#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int x=0;
		vector<int>vec;
		while(n--){
			int a;cin>>a;
			vec.push_back(a);
			x^=a;
		}
		int temp=0;
		for(int i=0;i<vec.size();i++){
			vec[i]=vec[i]^x;
		}
		
		for(int i=0;i<vec.size();i++){
			temp^=vec[i];
		}
		if(temp==0){
			cout<<x<<endl;
		}
		else{
			cout<<-1<<endl;
		}
		
	}
}
