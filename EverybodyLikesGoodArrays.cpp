#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>vec;
		int count=0;
		while(n--){
			int a;cin>>a;
			if(vec.size()==0){
				vec.push_back(a);
			}
			else if((vec[vec.size()-1]%2==0 && a%2==0) || (vec[vec.size()-1]%2!=0 && a%2!=0)){
				vec[vec.size()-1]=vec[vec.size()-1]*a;
				count++;
			}
			else{
				vec.push_back(a);
			}
			
		}
		cout<<count<<endl;
	}
}
