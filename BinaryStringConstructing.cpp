#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,x;cin>>a>>b>>x;
	string temp="";
	if(a>=b){
		temp+='0';
		a--;
		int count=1;
		while(x>1 && a && b){
			if(count%2==0){
				temp+='0';
				a--;
			}
			else{
				temp+='1';
				b--;
			}
			count++;
			x--;
		}
		if(temp[temp.size()-1]=='0'){
			while(a--){
				temp+='0';
			}
			while(b--){
				temp+='1';
			}
		}
		else{
			while(b--){
				temp+='1';
			}
			while(a--){
				temp+='0';
			}
		}
		
	}
	else{
		temp+='1';
		b--;
		int count=1;
		while(x>1 && a && b){
			if(count%2!=0){
				temp+='0';
				a--;
			}
			else{
				temp+='1';
				b--;
			}
			count++;
			x--;
		}
		if(temp[temp.size()-1]=='0'){
			while(a--){
				temp+='0';
			}
			while(b--){
				temp+='1';
			}
		}
		else{
			while(b--){
				temp+='1';
			}
			while(a--){
				temp+='0';
			}
		}
	}
	cout<<temp;
	
}
