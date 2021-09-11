#include <stdio.h>

int main(){
    int casos,i,kids,j;
    long candy,dulces,contador;
	scanf("%d", &casos);
	for (i = 0; i<casos; i++){
		scanf("%d", &kids);
		for(j=0;j<kids;j++){
			scanf("%ld", &dulces);
			candy+=dulces;
		}
		contador=candy%kids;
		if(contador==0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		candy=0;
	}
    return 0;
}
