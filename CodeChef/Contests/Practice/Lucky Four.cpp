//CodeChef Starting Contest
//ID=LUCKFOUR

#include <bits/stdc++.h>
using namespace std;

int main(){
    int T,contador=0;
    string four = "";
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        cin >> four;
        for(int j=0;j<four.length();j++){
            if(four[j]=='4'){
                contador++;
            }
        }
        printf("%d\n",contador);
        contador=0;
    }
    return 0;
}