#include <bits/stdc++.h>
using namespace std;

int main(){
    int T,N,D,contador=1;
    scanf("%d",&T);
    map<string,int> materias;

    for(int i=0;i<T;i++){
        materias.clear();
        scanf("%d",&N);

        for(int j=0;j<N;j++){
            char materia[101];
            int t;
            scanf("%s %d",&materia,&t);
            materias.insert(pair<string,int>(materia,t));
        }
        
        char tarea[101];
        scanf("%d %s",&D,&tarea);

        map<string,int>::iterator it;
        it = materias.find(tarea);
        
        printf("Case %d: ",contador);
        if ( (it == materias.end()) || (it->second > D+5) ){
            printf("Do your own homework!\n");
        }
        else if (it->second <= D){
            printf("Yesss\n");
        }
        else if (it->second <= D+5){
            printf("Late\n");
        }
        contador++;
    }
    return 0;
}