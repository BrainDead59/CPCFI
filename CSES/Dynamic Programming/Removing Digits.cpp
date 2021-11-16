//CSES ID: 1637
//Cantidad minima de numeros que se tiene que restar para poder obtener cero

#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    int n, max = 1e9;
    scanf("%d",&n);
    vector<int> dp(n+1,max);

    dp[0] = 0;
    for(int i=1;i<=n;i++){
        int valor = i;
        while(valor>0){
            dp[i]=min(dp[i],dp[i-valor%10]+1);
            valor/=10;
        }
    }
    printf("%d",dp[n]);
}