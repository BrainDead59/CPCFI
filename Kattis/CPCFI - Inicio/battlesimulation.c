#include <stdio.h>
#include <string.h>

int main(){
    char monsterAtk[1000000];
    scanf("%s", &monsterAtk); 
	size_t len = strlen(monsterAtk); 
    len+=1;
    int i;

	for(i=0;i<len;i++){
		if(i < len-3){ //Cuantos caracteres sobran
            char uno = monsterAtk[i];
            char dos = monsterAtk[i+1];
            char tres = monsterAtk[i+2];

            if(uno!=dos && uno!=tres && tres!=dos){ //Comprueba mientras los tres caracteres sean distintos 
                printf("C");
                i += 2;
                continue;
            }
        }
        char uno = monsterAtk[i];
        if (uno == 'R'){
            printf("S");
        }
        else if (uno == 'B'){
            printf("K");
        }
        else if (uno == 'L'){
            printf("H");
        }
	}
    printf("\n");
    return 0;
}
