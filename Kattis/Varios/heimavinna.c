#include <stdio.h>
#include <string.h>

int i=0;

char valor(int *a){
	char element;
	int val=0;
	while(1){
		scanf("%c",&element);
		if((element>='0') && (element<='9')){
			val = val * 10 + element - '0';
		}else{
			*a=val;
			return element;
		}
	}
}

int main(){
	int a,b,ejercicios=0;
	
	while(1){
		char cambioA=valor(&a);
		if(cambioA=='-'){
			char cambioB=valor(&b);
			ejercicios+=b-a+1;
		}else if(a!=0){
				ejercicios+=1;
		}else{
			break;
		}
	}
	printf("%d\n",ejercicios);
	return 0;
}
