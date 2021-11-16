//Kattis ID: minimumscalar
//PU++ Semana 1

#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    int c,n;
    scanf("%d",&c);

    for(int i=0;i<c;i++){

        scanf("%d",&n);
        vector<long long int> v1(n);
        vector<long long int> v2(n);

        int temp;
        for(int j=0;j<n;j++){
            scanf("%lld",&v1[j]);
        }

        for(int j=0;j<n;j++){
            scanf("%lld",&v2[j]);
        }

        sort(v2.begin(),v2.end());
        sort(v1.begin(),v1.end(),greater<long long int>());

        long long int suma=0;
        for(int j=0;j<n;j++){
            suma+=v1[j]*v2[j];
        }

        printf("Case #%d: %lld\n",i+1,suma);
        v1.clear();
        v2.clear();
    }
    return 0;
}