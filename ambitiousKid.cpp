#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int minInt=INT_MAX;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		if(abs(a)<minInt){
			minInt=abs(a);
		}
	}
	cout<<minInt;
}
