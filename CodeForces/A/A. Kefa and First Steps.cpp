#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,contador=1,maxi=1;
  scanf("%d",&n);
  long long int A[n];
  for(int i=0;i<n;i++){
    scanf("%lld",&A[i]);
  }
  for(int i=1;i<n;i++){
    if(A[i-1]<=A[i]){
      contador++;
      printf("Contador:%d\n",contador);
    }else{
      maxi=max(contador,maxi);
      contador=1;
    }
  }
  printf("%d",max(contador,maxi));
}