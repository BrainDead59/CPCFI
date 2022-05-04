//CSES

#include <iostream>  
#include <string>
#include <map>
using namespace std;

int main(){
	string s;
	string letraImpar;
	map<char,int> map;
	int contadorImpares=0;
	getline (cin,s);
	for(int i=0;i<s.length();i++){
		map[s[i]]++;
	}

	for (auto it=map.begin(); it!=map.end(); it++){
		if(it->second%2!=0){
			contadorImpares++;
			letraImpar=it->first;
			if(contadorImpares>1){
				printf("NO SOLUTION");
				return 0;
			}
		}
	}
	string derecha,izquierda="";
	for(auto it: map){
		string aux(it.second/2,it.first);
		izquierda+=aux;
		derecha=aux+derecha;
	}
	if(contadorImpares==1){
		string solucion = izquierda + letraImpar + derecha;
		printf("%s",solucion.c_str());
	}else{
		string solucion = izquierda + derecha;
		printf("%s",solucion.c_str());
	}
	return 0;
}