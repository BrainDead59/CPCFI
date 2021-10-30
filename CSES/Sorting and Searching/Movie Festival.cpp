//ID: 1629

#include <bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){
    return (a.second < b.second);
}


int main(){
    int n, contador=0;
    long long int inicio,fin;
    vector<pair<long long int,long long int>> pelis;

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lld %lld",&inicio,&fin);
        pelis.push_back(make_pair(inicio,fin));
    }

    sort(pelis.begin(), pelis.end(),sortbysec);

    //for(int i=0;i<n;i++){
       //printf("Inicio:%lld Final:%lld\n",pelis[i].first, pelis[i].second);
    //}

    long long int comienza = 0;

    for(int i=0;i<n;i++){
        if(comienza <= pelis[i].first){
            comienza = pelis[i].second;
            contador++;
        }
    }
    printf("%d",contador);
    return 0;
}