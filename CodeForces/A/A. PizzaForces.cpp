#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  long long int n;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
    scanf("%lld",&n);
    if(n%2){
      n++;
    }
    if(n<=6){
      printf("15\n");
    }
    if(n>6){
      printf("%lld\n",(n/2)*5);
    }
  }
}