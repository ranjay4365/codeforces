#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;
		vector<long long>vec1;
		vector<long long>vec2;
		long long root=sqrt(n);
		for(int i=1;i<=root;i++){
			if(n%i==0){
				if(i==(n/i)){
					vec1.push_back(i);
				}
				else{
					vec1.push_back(i);
					vec2.push_back(n/i);
				}
			}
		}
		for(int i=vec2.size()-1;i>=0;i--){
			vec1.push_back(vec2[i]);
		}
		long long maxCount=1,count=1;
		for(int i=0;i<vec1.size()-1;i++){
			if(abs(vec1[i]-vec1[i+1])==1){
				count++;
				maxCount=max(count,maxCount);
			}
			else{
				count=1;
			}
		}
		maxCount=max(count,maxCount);
		cout<<maxCount<<endl;
	}
}
