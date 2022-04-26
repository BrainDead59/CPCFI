//CSES

#include <stdio.h>
#include <cmath>

int main(){
    const long long mod = 1e9+7;
    int n;
    int solucion=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        solucion=(solucion*2)%mod;
    }
    printf("%d",solucion);
    return 0;
}