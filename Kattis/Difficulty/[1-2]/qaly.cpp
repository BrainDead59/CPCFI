#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    float a,b,c=0;
    scanf("%d",&n);
    while(n--){
        scanf("%f %f",&a,&b);
        c+=a*b;
    }
    printf("%0.3f",c);
    return 0;
}