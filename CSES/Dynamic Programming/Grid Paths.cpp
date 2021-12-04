//CSES ID: 1638
// Guarda el valor de las formas de acceder a la localidad actual de la malla, checancdo arriba y abajo


#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int n, mod=1e9+7;
    scanf("%d",&n);
    vector<string> malla(n);

    for (int i = 0; i < n; i++){
        cin >> malla[i];
    } 

    vector<int> dp(n,0);

    if(malla[0][0]=='*'){
        dp[0] = 0;
    }else{     
        dp[0] = 1;
    }

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; ++col) {
            if (malla[row][col] == '*'){
                dp[col] = 0;
                continue;
            }
            if (col > 0){
                dp[col] = (dp[col]+dp[col-1])%mod;
            }
        }
        /*for(int i=0;i<n;i++){
            printf("%d ",dp[i]);
        }
        printf("\n");*/
    }
    printf("%d",dp[n-1]);
 
    return 0;
}