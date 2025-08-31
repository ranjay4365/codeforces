#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
 
    while(t){
        int n,x;
        cin>>n>>x; 
        vector<int>vec; 
        for(int i=0;i<n;i++){
            int gasPoints;
            cin>>gasPoints;
            vec.push_back(gasPoints);
        }
 
        int maxDist = 2* (x-vec[vec.size()-1]);
 
        if(vec.size() == 1){
            maxDist = max(maxDist, vec[0]);
        }
 
        for(int i=1;i<vec.size();i++){
          if((vec[i] - vec[i-1]) > maxDist){
            maxDist = vec[i] - vec[i-1];
          }
        }
        cout<<maxDist<<endl;
        t--;
    }
 
    return 0;
}
