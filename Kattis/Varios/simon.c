#include<stdio.h>
#include <string.h>

int main(){
	int i,N,j,k;
	char cadena[10000];
	scanf("%d",&N);
	fflush(stdin);
	for(i=0;i<N;i++){
		scanf("%[^\n]",&cadena);
		fflush(stdin);
		if(strncmp(cadena,"simon says ", 11) || strlen(cadena)<=11 ){
			printf("\n");
		}else{
			printf("%s\n",cadena+11);
		}
	}
	return 0;
}
