#include <stdio.h>
#include <math.h>

int main(){
    int casos, i, totalm;
    double R, B, M, interes;
    scanf("%d", &casos);
    
    for(i=0; i<casos; i++){
        scanf("%lf %lf %lf", &R, &B, &M);
        totalm = 0;
        R = R/100;
        while(B > 0){
            totalm++;
            if(totalm > 1200){
                printf("impossible\n");
                break;
            }
            interes = B*R;
            interes = round(interes*100)/100;
            B = B + interes;
            B = round(B*100)/100;
            B = B - M;
            if(B < 0.001){
                printf("%d\n", totalm);
                break;
            }
        }
    }
    return 0;
}
