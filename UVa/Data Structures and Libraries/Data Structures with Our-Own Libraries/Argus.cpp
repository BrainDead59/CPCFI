#include <cstdio>
#include <queue>
#include <string.h>
using namespace std;

int main(){
    char I[10];
    int q,p,k;
    priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>> > pq;
    while(scanf("%s",&I), strcmp(I,"#")){
        scanf("%d %d",&q,&p);
        pq.push(make_pair(p, make_pair(q, p)));
    }
    scanf("%d",&k);

    for(int i=0;i<k;i++){
        pair<int, pair<int,int>> p = pq.top(); 
        pq.pop();
        printf("%d\n",p.second.first);
        p.first += p.second.second;
        pq.push(p);
    }
    return 0;
}