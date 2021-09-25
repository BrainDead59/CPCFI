#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,it=0,puntos=4;
    scanf("%d",&N);

    puntos=pow(2,N)+1;
    int tp=puntos*puntos;

    if(N==0){
        printf("%d",puntos);
    }else{
        printf("%d",tp);
    }
    return 0;
}