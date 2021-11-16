//Kattis ID: candydivision
//CPCFI Contest

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int N;
    set <long long int> candies;
    scanf("%lld",&N);
    for(long long int i=1;i<=sqrt(N);i++){
        if(N%i == 0){
            candies.insert(i);
            candies.insert(N/i);
        }
    }

    for(auto i: candies){
        printf("%lld ",i-1);
    }
    return 0;
}