#include <stdio.h>
#include <math.h>

int main (){
	long i, j, N, Val[3000], Dif[3000], contador, sdif;
	while (scanf("%ld",&N)==1){
		contador=0;
		sdif=0;
		for (i=0; i<N; i++){
    		scanf("%ld", &Val[i]);
    		Dif[i] = 0;
    	}
    	
    	for (i=1; i<N; i++){
    		Dif[i-1] = abs(Val[i-1]-Val[i]);
    		contador+=i;
    	}
    	
    	for (i=0;i<N-2;i++){
        	for (j=i+1;j<N-1;j++){
            	if (Dif[i]==Dif[j]){
	                Dif[j]=(Dif[i]+Dif[j])/2;
	                Dif[i]=0;
	                break;
            	}
        	}
    	}
    	for (i=0; i<N-1; i++){
    		sdif+=Dif[i];
    	}
    	if(contador==sdif){
    		printf("Jolly\n");
		}else{
			printf("Not jolly\n");
		}
	}
	return 0;
}
