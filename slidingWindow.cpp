#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int largestSubArrSum(vector<int>&arr, int k){
    int i=0,j=0;
    int ans=INT_MIN;
    int sum=0;
    int end=arr.size();
    while(j<end){
        sum+=arr[j];
        if(j-i+1<k){
            j++;
        }else if(j-i+1==k){
            ans=max(ans,sum);
            sum=sum-arr[i];
            i++;
            j++;
           
        }
    }return ans;
}
int main(){
    vector<int>arr{6,8,7,1,4,3,-2}; 
    int k=3;

    cout<< largestSubArrSum(arr,k);
}