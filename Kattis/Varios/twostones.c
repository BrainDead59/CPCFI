#include<stdio.h>

int main(){
	//impares alice - primero
	//pares bob
	long int N,i,piedras;
	scanf("%ld",&N);
	piedras=N;
	for(i=1;i<N;i++){
		if(i%2==0){
			piedras=N-2;
		}
	}
	if(piedras%2==0){
		printf("Bob");
	}else{
		printf("Alice");
	}
	return 0;
}
