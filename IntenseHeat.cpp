#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;cin>>n>>k;
	vector<int>vec(n);
	for(int i=0;i<n;i++) cin>>vec[i];

	double ans=0.0;
	
	for(int i=0;i<n;i++){
		double sum=0;
		for(int j=i;j<n;j++){
			sum+=vec[j];
			if(j-i+1>=k){
				double avg=(sum/(j-i+1));
				ans=max(avg,ans);
			}
		}
	}
	cout << fixed << setprecision(15) << ans << endl;
	
	
}
