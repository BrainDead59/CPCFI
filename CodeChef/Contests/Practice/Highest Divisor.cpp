//CodeChef Starting Contest
//ID=HDIVISR

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> div;
    int N;
    scanf("%d",&N);
    for(int i=1;i<11;i++){
        if(N%i==0){
            div.push_back(i);
        }
    }
    printf("%d",*max_element(div.begin(),div.end()));
    return 0;
}