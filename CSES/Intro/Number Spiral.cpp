#include <bits/stdc++.h>

using namespace std;
int main(){
	long long int t,mayor,columnas,renglones,solucion=0,diagonal;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> renglones >> columnas;
		mayor = max(columnas,renglones);
		if(mayor%2==0){
			if(mayor == columnas){
				diagonal = mayor*mayor;
				diagonal = diagonal - (mayor-1);
				solucion = diagonal - (mayor-renglones);
				//---
			}else{
				diagonal = mayor*mayor;
				diagonal = diagonal - (mayor-1);
				solucion = diagonal + (mayor-columnas);
				//++++
			}
				
		}else{
			if(mayor == columnas){
				diagonal = mayor*mayor;
				diagonal = diagonal - (mayor-1);
				solucion = diagonal + (mayor-renglones);
				//++++
			}else{
				diagonal = mayor*mayor;
				diagonal = diagonal - (mayor-1);
				solucion = diagonal - (mayor-columnas);
				//----
			}
			diagonal=0;
		}
		cout << solucion <<"\n";
	}
	return 0;
}
