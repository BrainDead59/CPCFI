//Kattis ID: gcpc
//PU++ Semana 1

#include <bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){
    return (a.second > b.second);
}

int main(){
    cin.tie(0);
    vector<pair<int,int>> teams;

    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        teams.push_back(make_pair(i,0));
    }

    for(int i=0;i<m;i++){
        int t,p;
        scanf("%d %d",&t,&p);
        auto ind = distance(teams.begin(), find_if(teams.begin(), teams.end(), [&](const auto& pair) { return pair.first == t; }));
        teams[ind].second += p;
        sort(teams.begin(), teams.end(),sortbysec);
        auto index = distance(teams.begin(), find_if(teams.begin(), teams.end(), [&](const auto& pair) { return pair.first == 1; }));
        printf("%d\n",index+1);
    }

    return 0;
}