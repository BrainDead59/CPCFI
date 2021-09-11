#include <stdio.h>

int main(){
    int casos, candidatos, Tvotos=0, Mayor=0, Aux, Ganador=0;
	int i,j;
    scanf("%d", &casos);

    for(i=0; i<casos; i++){
        scanf("%d", &candidatos);
        for(j = 1; j <= candidatos; j++){
            scanf("%d", &Aux);
            Tvotos+=Aux; //Guarda los votos totales
            if(Aux > Mayor){
                Ganador=j;
            	Mayor=Aux;
            }
            else if(Aux == Mayor){
                Ganador = 0;
            }
        }

        if(Ganador == 0){
            printf("no winner\n");
        }
        else if(Mayor > (Tvotos/2)){
            printf("majority winner %d\n", Ganador);
        }
        else{
            printf("minority winner %d\n", Ganador);
        }
        Mayor = 0;
        Tvotos = 0;
        Ganador = 0;
    }

    return 0;
}
