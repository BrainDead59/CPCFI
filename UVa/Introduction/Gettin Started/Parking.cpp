#include <bits/stdc++.h>
using namespace std;


int main() {
    int T,N,x,contador=0;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d",&N);
        int arr[N];
        for (int j = 0; j<N; j++){
            scanf("%d",&arr[j]);
        }

        sort(arr,arr+N);

        for (int j = 0; j<N-1; j++){
            contador+=arr[j+1]-arr[j];
        }
        
        contador+=arr[N-1];
        contador-=arr[0];
        printf("%d\n", contador);
        contador=0;

    }
    return 0;
}