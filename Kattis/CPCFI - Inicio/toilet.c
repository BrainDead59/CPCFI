#include <stdio.h>
#include <string.h>

int main(){
	int Up=0,Down=0,Like=0,i;
    char orden[1001], estado[3];
	scanf("%s", orden); 
	size_t len = strlen(orden); 
    
    estado[0]=orden[0];
    estado[1]=orden[0];
    estado[2]=orden[0];
    
    for(i=0;i<len-1;i++){
        char dos = orden[i+1];
    	//Para el caso de dejarlo arriba
        if(estado[0]=='U'){
        	if(dos=='D'){
				Up+=2;
			}
		}else{ //Uno==D
        	Up+=1;
		}
		estado[0]='U';
		
    	//Para el caso de dejarlo abajo
       if(estado[1]=='U'){
			Down+=1;
		}else{ //Uno==D
			if(dos=='U'){
        		Down+=2;
        	}
		}
		estado[1]='U';
		
        //Para el caso de dejarlo como te gustaria
        if(estado[2]=='U'){
        	if(dos=='D'){
        		Like+=1;
        		estado[2]='D';
        	}
		}else{
			if(dos=='U'){
        		Like+=1;
        		estado[2]='U';
        	}
		}
    }
    printf("%d \n",Up);
    printf("%d \n",Down);
    printf("%d \n",Like);
    return 0;
}
