#include<bits/stdc++.h>
using namespace std;
int main(){
	int row=0;
	int col=0;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			int a;cin>>a;
			if(a==1){
				row=i;
				col=j;
			}
		}
	}
	int ans=abs(3-row) + abs(3-col);
	cout<<ans;
}
