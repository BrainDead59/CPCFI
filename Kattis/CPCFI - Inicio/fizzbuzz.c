#include <stdio.h>

int main(){
    int X, Y, Z, i;
	scanf("%d %d %d", &X, &Y, &Z);
	for (i = 1; i <= Z; i++){
		if (i%Y==0 && i%X==0){
			printf("FizzBuzz \n");
		}else{
			if (i%X==0){
			printf("Fizz \n");
			}else{
				if (i%Y==0){
				printf("Buzz \n");
				}else{
					printf("%d \n",i);
				}
			}
		}
	}
    return 0;
}
