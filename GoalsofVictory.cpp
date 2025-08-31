#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int sum=0;
		n-=1;
		
		while(n--){
			int a;cin>>a;
			sum+=a;
		}
		cout<<-sum<<endl;
	}
}
