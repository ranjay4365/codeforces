#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int ones=0,negOnes=0;
		while(n--){
			int a;cin>>a;
			if(a==1){
				ones++;
			}
			else{
				negOnes++;
			}
		}
		negOnes=negOnes*(-1);
		int sum=negOnes+ones;
		int ans=0;
		while(sum<0 || negOnes%2!=0){
			ans++;
			negOnes+=1;
			ones+=1;
			sum=negOnes+ones;
		}
		cout<<ans<<endl;
		
	}
}
