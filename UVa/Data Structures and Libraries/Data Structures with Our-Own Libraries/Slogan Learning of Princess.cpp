#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,q;
	string PA,PB,cast;
	map <string,string> slogan;

	scanf("%d",&n);
	getline(cin,cast);

	for(int i=0;i<n;i++){
		getline(cin,PA);
		getline(cin,PB);
		slogan[PA]=PB.c_str();
	}

	scanf("%d",&q);
	getline(cin,cast);

	for(int i=0;i<q;i++){
		getline(cin,cast);
		printf("%s\n",slogan[cast].c_str());
	}
	
	return 0;
}