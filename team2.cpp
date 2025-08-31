#include<bits/stdc++.h>

using namespace std;

void hollowRectangle(int row,int col){
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }cout<<endl;

    }
}


vector<int> shuffleArrays(vector<int> arr){
    int s=arr.size();
    int n=s/2;

    vector<int>ans;


    for(int i=0;i<n;i++){
        ans.push_back(arr[i]);
        ans.push_back(arr[n+i]);
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return ans;
}


int goodPairs(vector<int>arr){

    // int c=0;
    // for(int i=0;i<arr.size()-1;i++){         
    //     for(int j=i+1;j<arr.size();j++){
    //         if(arr[i]==arr[j]){
    //             c++;
    //         }
    //     }
    // }return c;

    unordered_map<int,int>mp;
    for(auto &it:arr){
        mp[it]++;
    }
    int j=0;
    int c=0;
    while(j<arr.size()){
        if(mp.find(arr[j])!=mp.end()){
            c++;
        }
        j++;

    }return c;
}

vector<int> doubleArray(vector<int>nums);


vector<int> doubleArray(vector<int>nums){
    

    int n=nums.size();
    int s=2*n;

    vector<int> ans;

    
    int i=0;
    for(;i<n;i++){            
        ans.push_back(nums[i]);
    }for(i=0;i<n;i++){
        ans.push_back(nums[i]);
    }
    for(int i=0;i<s;i++){
        cout<<ans[i]<<" ";
    }
    return ans;
}

int main(){
    
    

    //vector<int>arr{2,5,1,3,4,7};
    vector<int>nums{1,2,3,1,1,3};
    int ans=goodPairs(nums);
    cout<<ans;
    //shuffleArrays(arr);

    //hollowRectangle(4,6);
    
}
