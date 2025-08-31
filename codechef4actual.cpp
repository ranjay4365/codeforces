#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<int>vec(n);
	    for(int i=0;i<n;i++){
	        cin>>vec[i];
	    }
	    int ans=0;
	    for(int i=1;i<n;i++){
	        if(vec[i]<vec[i-1]){
	            int j=i;
	            int mini=INT_MAX;
	            while(j<n && vec[j]<=vec[i]){
	                mini=min(mini,vec[j]);
	                j++;
	            }
	            ans=max(vec[j]-mini,ans);
	            i=j;
	        }
	    }
	    cout<<ans<<endl;
	}

}
