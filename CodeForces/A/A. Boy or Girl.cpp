#include <bits/stdc++.h>

using namespace std;

int main() {
  string A;
  int contador=0;
  set<char> letra;
  cin >> A;

  for(int i=0;i<A.length();i++){
    letra.insert(A[i]);
  }
  
  if(letra.size()%2==0){
    printf("CHAT WITH HER!");
  }else{
    printf("IGNORE HIM!");
  }
}