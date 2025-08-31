#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;cin>>n;
	vector<int>vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
		if(vec[i]%2==0){
			vec[i]-=1;
		}
	}
	for(int i=0;i<n;i++){
		cout<<vec[i]<<" ";
	}
}
