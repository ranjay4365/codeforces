#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int l,r;cin>>l>>r;
		vector<int>vec;
		vec.push_back(l);
		int count=1;
		while(vec[vec.size()-1]+count<=r){
			vec.push_back(vec[vec.size()-1]+count);
			count++;
		}
		cout<<vec.size()<<endl;
	}
}
