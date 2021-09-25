#include <bits/stdc++.h>
using namespace std;

int main(){
    int K,i=0,partes=0;

    scanf("%d",&K);
    while (K>pow(2,i)){
        i++;
    }
    int pot=pow(2,i);

    for(int j=0;j<=i;j++){
        if(K%pot !=0){
            K=K%pot;
            partes++;
            pot=pot/2;
        }
    }

    pot=pow(2,i);

    printf("%d %d",pot,partes);
    return 0;
}