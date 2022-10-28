#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b;
    while(scanf("%lld %lld",&a,&b) == 2){ 
        if(a-b<0){
            printf("%lld\n",b-a);
        }else{
            printf("%lld\n",a-b);
        }
    }
    return 0;
}