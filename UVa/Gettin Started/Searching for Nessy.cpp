#include <bits/stdc++.h>
using namespace std;


int main() {
    int t, r,c;

    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&r,&c);
        c=floor(c/3);
        r=floor(r/3);
        printf("%d\n",r*c);
    }
    return 0;
}