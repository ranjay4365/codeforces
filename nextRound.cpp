#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int count=0;
	vector<int>vec;
	while(n--){
		int a;cin>>a;
		
		vec.push_back(a);
	}
	int checker=vec[k-1];
	for(int i=0;i<vec.size();i++){
		if(vec[i]>0 && vec[i]>=checker){
			count++;
		}
	}
	cout<<count;
}

