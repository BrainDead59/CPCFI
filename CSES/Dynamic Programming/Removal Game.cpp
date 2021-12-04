//CSES ID: 1097
// Guardar el valor de la maxima suma posible en base a los subarrays que se van generando en cada uno de las iteraciones

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  scanf("%d",&n);

  vector <long long int> numeros(n);

  for(int i=0;i<n;i++){
    scanf("%lld",&numeros[i]);
  }

  vector <long long int> sumas(n);
  vector <vector <long long int> > dp(n,vector<long long int>(n));

  for(int i=0;i<n;i++){
    dp[i][i]=numeros[i];
    sumas[i]=numeros[i];
    if(i>0){
      sumas[i]+=sumas[i-1];
    }
  }

  for(int tam=2;tam<=n;tam++){
    for(int i=tam-1;i<n;i++){
      long long int total;
      if(i<tam){
        total = sumas[i];
      }else{
        total = sumas[i]-sumas[i-tam];
      }
      long long int der = total - dp[i-tam+1][i-1];
      long long int izq = total - dp[i-tam+2][i];
      dp[i-tam+1][i] = max(der,izq);
    }
  }

  /*
  printf("DP:\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("%lld ",dp[i][j]);
    }
    printf("\n");
  }*/

  printf("%lld",dp[0][n-1]);

}