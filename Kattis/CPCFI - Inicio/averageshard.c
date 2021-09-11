#include <stdio.h>

int main(){
    int casos, CS, ES, i, j;
    scanf("%d", &casos);

    for(i = 0; i < casos; i++){
        scanf("%d %d", &CS, &ES);

        long long CSTot = 0L, ETot = 0L;
        int estCS[CS], estE[ES];

        for(j = 0; j < CS; j++){
            scanf("%d", &estCS[j]);
            CSTot += estCS[j];
        }
        for( j = 0; j < ES; j++){
            scanf("%d", &estE[j]);
            ETot += estE[j];
        }

        double CSProm = CSTot / (double)CS;
        double EProm = ETot / (double)ES;

        int cont = 0;

        for(j = 0; j < CS; j++){
            if(estCS[j] < CSProm && estCS[j] > EProm){
                cont++;
            }
        }
        printf("%d\n", cont);
    }
    return 0;
}
