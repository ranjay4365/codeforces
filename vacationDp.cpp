#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	vector<vector<int>>vec;
	for(int i=0;i<n;i++){
		vector<int>temp(3);
		for(int j=0;j<3;j++){
			cin>>temp[j];
		}
		vec.push_back(temp);
	}
	for(int i=0;i<vec.size();i++){
		for(int j=0;j<3;j++){
			cout<<vec[i][j]<<" ";
		}
		cout<<endl;
	}
}
