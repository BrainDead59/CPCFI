#include <bits/stdc++.h>
using namespace std;

int main() {
    int T,N,PP,NW=0;
    scanf("%d",&T);

    for(int i=0;i<T;i++){
        scanf("%d",&N);
        bool dias[N];

        for(int i=0;i<N+1;i++){
            dias[i]=false;
        }

        scanf("%d",&PP);
        int parties[PP];

        for(int j=0;j<PP;j++){
            scanf("%d",&parties[j]);
        }

        for(int j=0;j<PP;j++){
            for(int k=1;k<=N;k++){
                if(k%parties[j]==0){
                    if(k%7==6 || k%7==0){
                        
                    }else{
                        if(dias[k]==false){
                            dias[k]=true;
                            NW++;
                        }
                    }                   
                }
            }
            
        }
        printf("%d\n",NW);
        NW=0;
    }
    return 0;
}