//Kattis ID: oddgnome
//

#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int n,s,pos=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&s);
        vector<int> list(s,0);
        for(int j=0;j<s;j++){
            scanf("%d",&list[j]);
        }
        for(int j=0;j<s-1;j++){
            if(list[j]!=list[j+1]-1){
                pos=j;
            }
        }
        list.clear();
        printf("%d\n",pos+1);
        pos=0;
    }
 
    return 0;
}