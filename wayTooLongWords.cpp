#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    while(n--){
        string s;cin>>s;
        if(s.size()>10){
            int l=s.size();
            int req=l-2;
            string num="";
            while(req>0){
            	int a=req%10;
            	char b=a+'0';
            	num+=b;
            	req/=10;
			}
			reverse(num.begin(),num.end());
            string ans=s[0]+num+s[l-1];
            cout<<ans<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }

    return 0;
}
