#include<iostream>
using namespace std;

long long squaresInChessBoard(long long N);

long long squaresInChessBoard(long long N) {
        // code here
        if(N==1){
            return 1;
        }
        return squaresInChessBoard(N-1) + N*N;
    }
int main(){
    long N;
    cin>>N;
    cout<<squaresInChessBoard(N);
}