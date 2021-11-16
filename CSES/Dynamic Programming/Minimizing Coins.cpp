//CSES ID: 1634
//Cantidad minima de obtener una cantidad dada con ciertas monedas.

#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    int n,x;
    int mod = 1e9+7;
    int max = 1e9;
    scanf("%d %d",&n,&x);

    vector<int> dp(x+1,max);
    vector<int> coins(n);

    for(int i=0;i<n;i++){
        scanf("%d",&coins[i]);
    }

    dp[0] = 0;
    for(int i=1;i <= x;i++){ // Se va llenando cada valor desde el 1 hasta el 11
        for(int j=0;j < n;j++){ // Se va recorriendo cada valor de las monedas 
            if(i - coins[j] >=0 ){ //Considera los valores de las monedas que sean menores al valor que buscamos
                dp[i]=min(dp[i],dp[i-coins[j]]+1);
            }
        }
    }
    if(dp[x]==max){
        printf("-1");
    }else{ 
        printf("%d",dp[x]);
    }
    return 0;   
}