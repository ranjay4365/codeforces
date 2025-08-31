//thoseWhoAreWithUs.cpp
#include<bits/stdc++.h>
using namespace std;
vector<int> retCountRowWise(vector<vector<int>>vec,int n,int m,int maximum){
    vector<int>row(n);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(vec[i][j]==maximum){
				row[i]++;
			}
		}
	}
	int maxRow=0;
	int count=0;
	for(int i=0;i<row.size();i++){
	    if(count<row[i]){
	        maxRow=i;
	        count=row[i];
	    }
	}
	return {maxRow,count};
}
vector<int> retCountColWise(vector<vector<int>>vec,int m,int n,int maximum){
    vector<int>col(m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(vec[i][j]==maximum){
				col[j]++;
			}
		}
	}
	int maxCol=0;
	int count=0;
	for(int j=0;j<col.size();j++){
	    if(count<col[j]){
	        maxCol=j;
	        count=col[j];
	    }
	}
	return {maxCol,count};
}

int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		vector<vector<int>>vec;
		int maximum=0;
		for(int i=0;i<n;i++){
			vector<int>inVec;
			for(int j=0;j<m;j++){
				int vecij;cin>>vecij;
				maximum=max(vecij,maximum);
				inVec.push_back(vecij);
			}
			vec.push_back(inVec);
		}
		vector<int>rowCount=retCountRowWise(vec,n,m,maximum);
		vector<int>colCount=retCountColWise(vec,m,n,maximum);
		
		
		
		if(rowCount[1]>colCount[1]){
		    set<pair<int,int>>st;
		    for(int i=0;i<n;i++){
    			for(int j=0;j<m;j++){
    				if(i==rowCount[0]){
    					if(st.find({i,j})==st.end()){
    						vec[i][j]--;
    					}
    					st.insert({i,j});
    				}
    			}
    		}
    		vector<int>colCount1=retCountColWise(vec,m,n,maximum);
    		for(int j=0;j<m;j++){
    			for(int i=0;i<n;i++){
    				if(j==colCount1[0]){
    					if(st.find({i,j})==st.end()){
    						vec[i][j]--;
    					}
    					st.insert({i,j});
    				}
    			}
    		}
    		
		}
		else{
		    set<pair<int,int>>st;
		    for(int j=0;j<m;j++){
    			for(int i=0;i<n;i++){
    				if(j==colCount[0]){
    					if(st.find({i,j})==st.end()){
    						vec[i][j]--;
    					}
    					st.insert({i,j});
    				}
    			}
    		}
    		vector<int>rowCount1=retCountRowWise(vec,n,m,maximum);
    		for(int i=0;i<n;i++){
    			for(int j=0;j<m;j++){
    				if(i==rowCount1[0]){
    					if(st.find({i,j})==st.end()){
    						vec[i][j]--;
    					}
    					st.insert({i,j});
    				}
    			}
    		}
    		
		}
		
		maximum=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				maximum=max(maximum,vec[i][j]);
			}
		}
		cout<<maximum<<endl;
	}
}
