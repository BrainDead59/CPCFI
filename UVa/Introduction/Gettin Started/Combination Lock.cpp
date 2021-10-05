#include <bits/stdc++.h>
using namespace std;

int main(){
    int P1,P2,P3,P4,grado=0;
    while (1){
        scanf("%d %d %d %d",&P1,&P2,&P3,&P4);

        if (P1==0 && P2==0 && P3==0 && P4==0){
            break;
        } 

        if (P1-P2<0){
            grado+=P1-P2 + 40;
        }else{
            grado+=P1-P2;
        }

        if (P3-P2<0){
            grado+=P3-P2 + 40;
        }else{
            grado+=P3-P2;
        }

        if (P3-P4<0){
            grado+=P3-P4 + 40;
        }else{
            grado+=P3-P4;
        }

        printf("%d\n",grado*9+1080);
        grado=0;
    }
    return 0;
}