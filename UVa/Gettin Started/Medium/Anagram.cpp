#include <bits/stdc++.h>

using namespace std;

bool comparador(char a, char b){
	if(tolower(a) == tolower(b)){
		return a<b;
	}
	return tolower(a) < tolower(b);
}

int main(){
	int n;
	string letras;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin >> letras;
		sort(letras.begin(), letras.end(),comparador);
		do{
	    	cout << letras << endl;
	  	}while (next_permutation(letras.begin(), letras.end(),comparador));
	}
	return 0;
}
