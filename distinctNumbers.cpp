#include<bits/stdc++.h>
using namespace std;

int maxRowSum(vector<vector<int>>vec){
    int maxSum=0;
    for(int i=0;i<vec[0].size();i++){
        int colSum=0;
        for(int j=0;j<vec.size();j++){
            colSum+=vec[j][i];
        }
        maxSum=max(maxSum,colSum);
    }
    return maxSum;
}
int diagonalSum(vector<vector<int>>vec){
    int sum=0;
    int n=vec.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=vec[i][j];
            }
            else if((i+j)==(n-1)){
                sum+=vec[i][j];
            }
        }
    }
    return sum;
}
int main(){
    cout<<maxRowSum(vec)<<endl;ō
    cout<<diagonalSum(vec)<<endl;
    // cout<<5;

}
