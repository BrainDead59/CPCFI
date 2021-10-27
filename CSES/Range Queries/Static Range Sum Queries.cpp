#include <bits/stdc++.h>
using namespace std;


vector<long long int> A;
vector<long long int> ST;


void build(int n) { // O(n)
    for(int i = n; i < 2*n; i++) {
        ST[i] = A[i-n];
    }
    for (int i = n-1; i >= 1; i--) {
        ST[i] = ST[2*i] + ST[2*i+1];
    }
}

long long T(int node, int i, int j, int L, int R) {
    if (L > j || R < i) return 0; //RMaxQ
    if (L >= i && R <= j) return ST[node];
    int M = (L+R)/2;
    return T(node*2, i, j, L, M) +  T(node*2+1, i, j, M+1, R);
}


int main(){
    long long int n, q;
    scanf("%lld %lld",&n,&q);

    for(int i=0;i<n;i++){
        long long int e; 
        scanf("%lld",&e);
        A.push_back(e);
    }

    // si popcount(n) == 1: n es una potencia de dos
    // si popcount(n) != 1: n NO una potencia de dos
    while(__builtin_popcount(n) != 1) {
        A.push_back(0);
        n++;
    }

    for(int i=0;i<2*n;i++){
        ST.push_back(0);
    }

    build(n);

    int L = 0; 
    int R = n-1;

    for(int k=0;k<q;k++){
        long long int a, b;
        scanf("%lld %lld",&a,&b);
        a--;
        b--;
        printf("%lld\n", T(1, a, b, L, R));
    }
    return 0;
}