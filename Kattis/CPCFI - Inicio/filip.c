#include <stdio.h>

int main(){
    int A;
    int B;

    scanf("%d %d", &A, &B);

    A = (A % 10) * 100 + ((A / 10) % 10) * 10 + ((A / 100) % 10);
    printf("%d\n",A);
    B = (B % 10) * 100 + ((B / 10) % 10) * 10 + ((B / 100) % 10);
    printf("%d\n",B);

    if (A>B){
        printf("%d", A);
    }
    else if(A<B){
        printf("%d", B);
    }
    else if(A==B){
        printf("Equal");
    }

    return 0;
}
