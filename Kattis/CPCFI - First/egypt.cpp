#include <bits/stdc++.h>
using namespace std;

int main(){
    int N[3];
    while(1){
        scanf("%d %d %d",&N[0],&N[1],&N[2]);
        if(N[0]==0 && N[1]==0 && N[1]==0){
            break;
        }
        int n = sizeof(N);
        sort(N,N+3);
        if( N[0]*N[0]+ N[1]*N[1] == N[2]*N[2]){
            printf("right\n");
        }else{
            printf("wrong\n");
        }
    }
    return 0;
}