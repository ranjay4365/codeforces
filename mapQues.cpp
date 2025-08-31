#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int, int>mp;

    vector<int>vec{2,5,9,9,5,6,8,7,5};
    for(int i=0;i<vec.size();i++){
        mp[vec[i]]++;
    }
    cout<< mp.size();
}