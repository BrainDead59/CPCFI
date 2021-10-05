#include <bits/stdc++.h>

using namespace std;
int main() {
	long long int a;
	cin >> a;
	cout << a << " ";
	while(1){
		if(a==1){
			break;
		}else if(a%2==0){
			a=a/2;
			cout << a << " ";
		}else{
			a=a*3+1;
			cout << a << " ";
		}
	}
	return 0;
}
