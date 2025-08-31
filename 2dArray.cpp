#include<bits/stdc++.h>
using namespace std;
int main(){
    //creation
    int mat[3][4];
    
    //input row wise
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>mat[i][j];
        }
    }

    //output
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<mat[i][j]<<" ";
        }
        //cout<<endl;
    }

    cout<<"input col wise";
    for(int j=0;j<4;j++){
        for(int i=0;i<3;i++){
            cin>>mat[i][j];
        }
    }

    //output
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<mat[i][j]<<" ";
        }
        // cout<<endl;
    }
}