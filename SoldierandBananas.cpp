#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,n,w;cin>>k>>n>>w;
	int totalAmt=0;
	int i=1;
	while(i<=w){
		totalAmt+=(k*i);
		i++;
	}
	if(n>=totalAmt){
		cout<<0;
	}
	else{
		cout<<totalAmt-n;
	}
	
}
