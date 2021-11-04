#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,a,d;
    long long int ti=0,tf=0,t=0;
    vector<pair<long long int, long long int>> task;
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
        scanf("%lld %lld",&a,&d);
        task.push_back(make_pair(a,d));
    }

    sort(task.begin(), task.end());

    for(int i=0;i<n;i++){
        if(i==0){
            ti+=task[i].first;
            t+=task[i].second - ti;
        }else{
            ti+=task[i].first;
            t+=task[i].second - ti;
        }
    }
    printf("%lld",t);
    return 0;
}