#include<stdio.h>

int main(){
	int x,n,acumulador,gasto,i;
	scanf("%d",&x);
	scanf("%d",&n);
	acumulador=x;
	for(i=0;i<n;i++){
		scanf("%d",&gasto);
		acumulador-=gasto;
		acumulador+=x;
	}
	printf("%d",acumulador);
	return 0;
}
