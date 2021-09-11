#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, ballonH, arrow=0;
    scanf("%d", &N);
    int *popped = (int*)calloc(1000000,sizeof(int));

    for(int i = 0; i < N; i++){
        scanf("%d", &ballonH);
        if(popped[ballonH+1]){
            popped[ballonH+1] = popped[ballonH+1] - 1;
        }
        else{
            arrow++;
        }
        popped[ballonH]++;
    }

    printf("%d\n", arrow);
    free(popped);
    return 0;
}
