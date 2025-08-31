//Shrink
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>vec(n);
		int i=0,j=n-1;
		int count1=1;
		int count2=2;
		while(i<j){
			
			vec[i]=count1;
			vec[j]=count2;
			count1+=2;
			count2+=2;
			i++;
			j--;
		}
		if(i==j){
			vec[i]=count1;		
		}
		for(int i=0;i<n;i++){
			cout<<vec[i]<<" ";
		}
		cout<<endl;
		
		
	}
}
