#include <stdio.h>

int main(){
    int P,N,K,i,j,factorial;
    factorial=0;
    scanf("%d",&P);
    for (i=0;i<P;i++){
    	scanf("%d %d",&K,&N);
    	for(j=0;j<N;j++){
    		factorial = factorial + j + 2;
		}
		printf("%d %d\n",K,factorial);
		factorial=0;
	}
    return 0;
}
