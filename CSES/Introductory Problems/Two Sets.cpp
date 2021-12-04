#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    scanf("%lld",&n);

    if(((n*(n+1))/2)%2==1){
        printf("NO");
    }else{
        printf("YES\n");
        vector<long long int> A,B;
        long long int limite = (n*(n+1))/4;
        printf("Limite: %lld\n",limite);
         while (n){
            if (limite - n>= 0){
                A.push_back(n);
                limite -= n;
            }
            else{
                B.push_back(n);
            }
            n--;
        }

        printf("%d\n",A.size());
        for(int i=0;i<A.size();i++){
            printf("%lld ",A[i]);
        }

        printf("\n%d\n",B.size());
        for(int i=0;i<B.size();i++){
            printf("%lld ",B[i]);
        }
    }
    return 0;
}