#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    
    cout<<"Size :"<<v.size()<<endl;
    cout<<"Capacity :"<<v.capacity()<<endl;

    v.push_back(5);

    cout<<"Size :"<<v.size()<<endl;
    cout<<"Capacity :"<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Size :"<<v.size()<<endl;
    cout<<"Capacity :"<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Size :"<<v.size()<<endl;
    cout<<"Capacity :"<<v.capacity()<<endl;

    v.resize(20);
    cout<<"Size :"<<v.size()<<endl;
    cout<<"Capacity :"<<v.capacity()<<endl;
}