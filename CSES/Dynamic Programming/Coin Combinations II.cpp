//CSES ID: 1636
//Formas ordenadas de obtener un valor 

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
    for(int i=0;i<n;i++){ 
        for(int j=1;j<=x;j++){ 
            if(j - coins[i] >=0 ){ 
                dp[j]=(dp[j] + dp[j-coins[i]])%mod;
            }
        }
    }
    printf("%d",dp[x]);
    return 0;   
}