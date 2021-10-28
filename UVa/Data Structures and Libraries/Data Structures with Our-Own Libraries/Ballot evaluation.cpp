#include <bits/stdc++.h>
using namespace std;

int main(){
    int p,g,s;
    double votos;
    char nombre[21];
    unordered_map<string,double> per;

    scanf("%d %d",&p,&g);
    for(int i=0;i<p;i++){
        scanf("%s",&nombre);
        scanf("%lf",&votos);
        per[nombre]=votos;
    }


    for(int i=1;i<=g;i++){
        scanf("%s",&nombre);
        double total = per[nombre];

        scanf("%s",&nombre);

        while(1){
            if(strcmp(nombre, "+") == 0){
                scanf("%s",&nombre);
                total += per[nombre];
                scanf("%s",&nombre);
            }else{
                break;
            }
        }
        scanf("%d",&s);
        printf("Guess #%d was ",i);

        if(strcmp(nombre,"<")==0){
            if(total<s){
                printf("correct.\n");
            }else{
                printf("incorrect.\n");
            }
        }
        if(strcmp(nombre,"<=")==0){
            if(total<=s){
                printf("correct.\n");
            }else{
                printf("incorrect.\n");
            }
        }
        if(strcmp(nombre,">")==0){
            if(total>s){
                printf("correct.\n");
            }else{
                printf("incorrect.\n");
            }
        }
        if(strcmp(nombre,">=")==0){
            if(total>=s){
                printf("correct.\n");
            }else{
                printf("incorrect.\n");
            }
        }
        if(strcmp(nombre,"=")==0){
            if(total==s){
                printf("correct.\n");
            }else{
                printf("incorrect.\n");
            }
        } 
    }
    return 0;
}
