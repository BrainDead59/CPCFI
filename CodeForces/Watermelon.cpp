#include <bits/stdc++.h>
using namespace std;

void solve(int w) {
    if (w==2){
        printf("NO");
        return;
    }

    if(w%2==0){
        printf("YES");
    }else{
        printf("NO");
    }
}

int main() {
    int w;
    scanf("%d",&w);

    solve(w);
    return 0;
}
