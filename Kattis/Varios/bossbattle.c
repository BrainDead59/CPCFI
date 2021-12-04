#include<stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    if (n <= 3)
        printf("1\n");
    else
        printf("%d\n", n - 2);

    return 0;
}
