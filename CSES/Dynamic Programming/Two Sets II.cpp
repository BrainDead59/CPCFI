//CSES ID: 1093
//

#include <bits/stdc++.h>
using namespace std;

/* 
  0 1 2 3 
0 1 0 0 0
1 1 1 0 0
2 1 1 1 1
3 1 1 1 2

 */
int main() {
    int n,mod = 1e9+7;
    scanf("%d",&n);

    if (((n*(n+1))/2)%2==1){
        printf("0");
        return 0;
    }else{
        int mitad = (n*(n+1))/4;
        vector<long long int> dp(mitad + 1,0);

        dp[0] = 1;
        for (int valor = 1; valor <= n; valor++) {
            for (int i = mitad; i >= valor; i--) {
                dp[i] = (dp[i] + dp[i - valor]) % mod;
            }
        }
     
        long long int modInverseOfTwo = 500000004;
        cout << (dp[mitad] * modInverseOfTwo) % mod;
     
    }
    return 0;
}