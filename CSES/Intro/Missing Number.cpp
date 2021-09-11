#include <bits/stdc++.h>

using namespace std;

int main() {
	int a,valor;
	cin >> a;
	int A[a+1];
	for(int i = 0; i<a-1; i++){
		cin >> valor;
		A[valor]=1;
	}

	for(int z= 1; z<a+1; z++){
		if(A[z]!=1){
			cout << z;
		}
	}
	return 0;
}
