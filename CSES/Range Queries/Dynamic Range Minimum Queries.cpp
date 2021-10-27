#include <bits/stdc++.h>
using namespace std;


vector<long long int> A;
vector<long long int> ST;


void build(int n) { // O(n)
    for(int i = n; i < 2*n; i++) {
        ST[i] = A[i-n];
    }
    for (int i = n-1; i >= 1; i--) {
        ST[i] = min(ST[2*i],ST[2*i+1]);
    }
}

long long T(int node, int i, int j, int L, int R) {
    if (L > j || R < i) return 10000000000; //RMaxQ
    if (L >= i && R <= j) return ST[node];
    int M = (L+R)/2;
    return min(T(node*2, i, j, L, M),T(node*2+1, i, j, M+1, R));
}

void update(int node, long long int nv, int n){
    ST[node+n] = nv;
    for(long long int i=(node+n)/2;i>0;i/=2){
        ST[i] = min(ST[2*i],ST[2*i+1]);
    }
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

    for(int i=0;i<q;i++){
        long long int o, k, u;
        scanf("%lld %lld %lld",&o,&k,&u);
        if(o==1){
            k--;
            update(k,u,n);
        }else if(o==2){
            k--;
            u--;
        printf("%lld\n", T(1, k, u, L, R));
        }
    }
    return 0;
}