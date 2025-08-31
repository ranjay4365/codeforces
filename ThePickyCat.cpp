#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>vec(n);
		for(int i=0;i<n;i++) cin>>vec[i];
		int count=0;
		for(int i=0;i<n;i++){
			if(abs(vec[i])<abs(vec[0])){
				count++;
			}
		}
		if(count<=n/2){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		
	}
}

//2 1 3 4 5
//1 2 -3 4 5
//-3 1 2 4 5
//4 1 2 3 5  
//1 2 3 4 5

//4 5 6 1 2 3   failed for this test case
//1 2 3 4 5 6
//-6 -5 -4 1 2 3

//5 4 6 1 2 3
//1 2 3 4 5 6 7
//
// -4 -3 -5 1 2
//1 2 -3 -4 -5
//4 5 -3 1 2

//4 2 0 -5
//0 2 -4 -5


