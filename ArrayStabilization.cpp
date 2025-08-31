#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	vector<int>vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
//	comment
	sort(vec.begin(),vec.end());
	cout<<min(vec[n-2]-vec[0],vec[n-1]-vec[1]);
}
