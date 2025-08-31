#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1="ab";
	string s2="ababaab";
	while(s1.size()<=s2.size()){
		s1+=s1;
	}
	cout<<s1<<endl;
}

10
1 1
1
1 2
1 2
2 1
2
1
2 2
4 2
3 4
3 4
1 2 3 2
3 2 1 3
2 1 3 2
4 3
1 5 1
3 1 3
5 5 5
3 5 1
4 4
1 3 3 2
2 3 2 2
1 2 2 1
3 3 2 3
2 2
2 2
1 2
3 2
1 2
2 1
1 2
3 3
2 1 1
1 2 1
1 1 2

