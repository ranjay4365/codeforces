#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int ans=0;
	while(n--){
		string var1,var2;
		cin>>var1,var2;
		if((var1=="++" && (var2=="x"|| var2=="X"))||((var1=="x" || var1=="X") && var2=="++")){
			ans++;
		}
		else{
			ans--;
		}
	}
	cout<<ans;
}
