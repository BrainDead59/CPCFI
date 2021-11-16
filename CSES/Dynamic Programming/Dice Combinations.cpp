//CSES ID: 1633
//Todas las posibles formas de obtener el valor de un dado

#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    int n;
    int mod = 1e9+7;
    scanf("%d",&n);
    vector<long long int> dp(n+1,0);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(i-j >=0 ){
                dp[i]=(dp[i]+dp[i-j])%mod;
            }
        }
    }
    printf("%lld",dp[n]);
    return 0;
}