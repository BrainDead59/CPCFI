#include<stdio.h>
#include <string.h>

int main(){
	int i,N,j;
	char cadena[10000];
	scanf("%d",&N);
	fflush(stdin);
	for(i=0;i<N;i++){
		scanf("%[^\n]",&cadena);
		fflush(stdin);
		if(cadena[0]=='S'){
			for(j=11;j<strlen(cadena);j++){
				printf("%c",cadena[j]);
			}
			printf("\n");
		}
	}
	return 0;
}
