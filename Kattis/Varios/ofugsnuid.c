#include <stdio.h>

int main(){
	long int n,i;
	long int *A = (int*)calloc(1000000,sizeof(int));
	scanf("%ld",&n);
	for(i=0;i<n;i++){
		scanf("%ld",&A[i]);
	}
	for(i=n-1;i>-1;i--){
		printf("%ld\n",A[i]);
	}
	return 0;
}
