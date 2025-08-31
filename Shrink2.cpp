#include<iostream>
#include<vector>
using namespace std;



int main(){

    int t ;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

//        vector<int>vec;
        vector<int>even;
		for(int i=1;i<=n;i++){
			if(i%2!=0){
				cout<<i<<" ";
			}
			else{
				even.push_back(i);
			}	
		}
		for(int i=even.size()-1;i>=0;i--){
			cout<<even[i]<<" ";
		}
		cout<<endl;
        
    }

    return 0;
}
