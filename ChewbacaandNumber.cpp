//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	long long n;cin>>n;
//	vector<int>vec;
//	while(n>0){
//		vec.push_back(n%10);
//		n/=10;
//	}
//	int s=vec.size();
//	for(int i=0;i<s-1;i++){
//		if(vec[i]>4){
//			vec[i]=9-vec[i];
//		}
//	}
//	if(vec[s-1]>4 && vec[s-1]!=9){
//		vec[s-1]=9-vec[s-1];
//	}
//	long long ans=0;
//	for(int i=s-1;i>=0;i--){
//		ans=(ans*10)+vec[i];
//	}
//	cout<<ans;
//}
#include<bits/stdc++.h>
using namespace std;
int s(long long n){
    long long cnt = 0;
    while(n){
        n /= 10;
        cnt++;
    }
    return cnt;
}
int main(){
    long long n;
    cin>>n;
    int size = s(n);
    long long cnt = 1, sum = 0, mini = INT_MAX, sze = 0;
    bool flag = false;
    while(n){
        long long rem = n % 10;
        long long mini = min(9-rem, rem);
        if(sze == size-1 && sum != 0 && mini == 0){
            sum = sum + rem * cnt;
        }else{
            if(mini == 0){
                flag = true;
            }
            if(flag && mini == 0){
                sum = sum + mini * cnt;
            }else sum = sum + mini * cnt;
        }
        cnt *= 10;
        n /= 10;
        sze++;
    }
    // cout<<sze<<" "<<size-1<<endl;
    if(sum == 0)cout<<9<<endl;
    else cout<<sum<<endl;
    return 0;
}
