#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>vec(n);
		vector<int>vec1;
		vector<int>vec2;
		
		for(int i=0;i<n;i++){
			cin>>vec[i];
		}
		int i=0,j=n-1;
		sort(vec.begin(),vec.end());
		while(i<j){
			if(vec1.size()==0 && vec2.size()==0){
				vec1.push_back(vec[i]);
				if(vec1[vec1.size()-1]==vec[j]){
					vec1.push_back(vec[j]);
				}
				else{
					vec2.push_back(vec[j]);
				}
			}
			else{
				if(vec[i]==vec1[vec1.size()-1]){
					vec1.push_back(vec[i]);
				}
				else if(vec[i]==vec2[vec2.size()-1]){
					vec2.push_back(vec[i]);
				}
				else{
					vec1.push_back(vec[i]);
				}
				if(vec[j]==vec1[vec1.size()-1]){
					vec1.push_back(vec[j]);
				}
				else if(vec[j]==vec2[vec2.size()-1]){
					vec2.push_back(vec[j]);
				}
				else{
					vec2.push_back(vec[j]);
				}
			}
			i++;
			j--;
		}
		if(i==j){
			if(vec[i]==vec1[vec1.size()-1]){
				vec1.push_back(vec[i]);
			}
			else if(vec[i]==vec2[vec2.size()-1]){
				vec2.push_back(vec[i]);
			}
			else if(vec[i]<vec2[vec2.size()-1]){
				vec1.push_back(vec[i]);
			}
			else{
				vec2.push_back(vec[i]);
			}
		}
		if(vec1.size()==0 || vec2.size()==0){
			cout<<-1<<endl;
		}
		else{
			cout<<vec1.size()<<" "<<vec2.size()<<endl;
			for(int i=0;i<vec1.size();i++){
				cout<<vec1[i]<<" ";
			}
			cout<<endl;
			for(int i=0;i<vec2.size();i++){
				cout<<vec2[i]<<" ";
			}
			cout<<endl;
		}
	}
}
