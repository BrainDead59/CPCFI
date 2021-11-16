//CSES ID: 1635
//Todas las posibles combinaciones para poder obtener una cantidad de monedas.

#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    int n,x;
    int mod = 1e9+7;
    scanf("%d %d",&n,&x);

    vector<int> dp(x+1,0);
    vector<int> coins(n);

    for(int i=0;i<n;i++){
        scanf("%d",&coins[i]);
    }

    dp[0] = 1;
    for(int i=1;i<=x;i++){ 
        for(int j=0;j<n;j++){ 
            if(i - coins[j] >=0 ){ 
                dp[i]=(dp[i] + dp[i-coins[j]])%mod;
            }
        }
    }
    printf("%d",dp[x]);
    return 0;   
}