#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,p,v,t;
    int contador=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&p,&v,&t);
        if(p && v || t && v || t && p){
            contador++;
        }
    }
    printf("%d",contador);
    return 0;
}