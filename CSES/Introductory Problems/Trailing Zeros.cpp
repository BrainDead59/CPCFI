//CSES
#include <stdio.h>
#include <string> 
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	long long int factorPrimo=5;
	long long int solucion=0;
	while(factorPrimo<=n){
		solucion+=n/factorPrimo;
		factorPrimo*=5;
	}
	printf("%lld",solucion);
	return 0;
}