#include <stdio.h>

int main(){
    int n,i,personas;
    scanf("%d",&n);
    int P[n];
    P[0]=1;
    for (i = 1; i <n; i++){
    	scanf("%d", &personas);
    	P[personas+1]=i+1;
	}
	
	for (i = 0; i <n; i++){
    	printf(" %d",P[i]);
	}
    return 0;
}
