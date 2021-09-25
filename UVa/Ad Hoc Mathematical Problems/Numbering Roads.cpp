#include <bits/stdc++.h>
using namespace std;

int main(){
    int contador=1,i,N,R,estado=0;

    while (1){
        scanf("%d %d",&R,&N);

        if (N==0 && R==0) break;

        for(i=0;i<=26;i++){
            if(N*(i+1)>=R){
                printf("Case %d: %d\n",contador,i);
                estado=1;
                break;
            }
        }

        if(estado==0){
            printf("Case %d: impossible\n",contador);
        } 

        contador++;
        estado=0;
    }
    return 0;
}