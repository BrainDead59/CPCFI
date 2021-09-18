#include <bits/stdc++.h>
using namespace std;

int main(){
	string cadena, AD, AI;
	char e;
	while(1){
		
		getline(cin, cadena);
		if(cadena.compare("DONE") == 0){
			break;
		}
		
		AD = "";
		AI = "";
		
		for(int i = 0; i <cadena.length(); i++){
			if((cadena[i]!=' ') && (cadena[i]!='!') && (cadena[i]!='?') && (cadena[i]!='.') && (cadena[i]!=',')){
				AD += tolower(cadena[i]);
			}
		}
		
		for(int i = AD.length()-1; i >= 0; i--){
				AI += AD[i];
		}
		
		if(AI.compare(AD) == 0){
			cout << "You won't be eaten!" << endl;
		}
		else{
			cout << "Uh oh.." << endl;
		}
	}

	return 0;
}
