#include <stdio.h>

int main(){
    int cases, CSS, ES;
    scanf("%d", &cases);

    for(int i = 0; i < cases; i++){
        scanf("%d %d", &CSS, &ES);

        long long CS_Total = 0L, E_Total = 0L;
        int students_cs[CSS], students_e[ES];

        for(int j = 0; j < CSS; j++){
            scanf("%d", &students_cs[j]);
            CS_Total += students_cs[j];
        }
        for(int j = 0; j < ES; j++){
            scanf("%d", &students_e[j]);
            E_Total += students_e[j];
        }

        double CS_Average = CS_Total / (double)CSS;
        double E_Average = E_Total / (double)ES;

        int count = 0;

        for(int j = 0; j < CSS; j++){
            if(students_cs[j] < CS_Average && students_cs[j] > E_Average){
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}