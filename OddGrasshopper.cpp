/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin>>t;
	while(t--){
		long long s,n;cin>>s>>n;
		long long a=1,terms;
		
		if(n%2==0){
			terms=(n)/2;
			long long nthTerm=1+(terms-1)*4;
			long long totSum= (1LL*terms * (1+nthTerm))/2;
			
			if(terms%2==0){
			    long long tempTerms=terms/2,secLastNum=nthTerm-4;
			    long long oddSum=(1LL* tempTerms *(1+secLastNum))/2;
			    long long evenSum=totSum-oddSum;
			    oddSum+=n;
			    
			    if(s%2==0){
			        cout<<s-oddSum+evenSum<<endl;
			    }
			    else{
			        cout<<s+oddSum-evenSum<<endl;
			    }
			}
			else{
			    long long tempTerms=(terms+1)/2;
			    long long oddSum=(1LL*tempTerms*(1+nthTerm))/2;
			    long long evenSum=totSum-oddSum;
			    evenSum+=n;
			    if(s%2==0){
			        cout<<s-oddSum+evenSum<<endl;
			    }
			    else{
			        cout<<s+oddSum-evenSum<<endl;
			    }
			}
			
		}
		else{
			terms=(n+1)/2;
			long long nthTerm=1+(terms-1)*4;
			long long totSum= (1LL*terms * (1+nthTerm))/2;
			
			if(terms%2==0){
			    long long tempTerms=terms/2,secLastNum=nthTerm-4;
			    long long oddSum=(1LL* tempTerms *(1+secLastNum))/2;
			    long long evenSum=totSum-oddSum;
			    
			    
			    if(s%2==0){
			        cout<<s-oddSum+evenSum<<endl;
			    }
			    else{
			        cout<<s+oddSum-evenSum<<endl;
			    }
			}
			else{
			    long long tempTerms=(terms+1)/2;
			    long long oddSum=(1LL*tempTerms*(1+nthTerm))/2;
			    long long evenSum=totSum-oddSum;
			    
			    if(s%2==0){
			        cout<<s-oddSum+evenSum<<endl;
			    }
			    else{
			        cout<<s+oddSum-evenSum<<endl;
			    }
			}
		}
		
	}
}

