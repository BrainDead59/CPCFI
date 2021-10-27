#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string mood;
	string love="I love";
	string hate="I hate";
	string  th = "that";
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		if(i%2==0){
			cout << hate;
		}else{
			cout << love;
		}
		i++;
		if(i<n){
			cout << " that ";
		}
		i--;
	}
	cout << " it" << endl;
    return 0;
}
