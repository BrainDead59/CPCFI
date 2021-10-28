#include <bits/stdc++.h>
using namespace std;

int main(){
    string name;
    map<string,int> per;
    set<string> nomb;
    vector<string> nombres;

    int n,p,m,z;
    int winner=0;

    cin >> n >> p >> m;

    for(int i=0;i<n;i++){
        cin >> name;
        per[name]=0;
    }

    for(int i=0;i<m;i++){
        cin >> name;
        cin >> z;
        per[name]+=z;
        if(per[name]>=p && !nomb.count(name)){
            nombres.push_back(name);
            nomb.insert(name);
            winner=1;
        }else{

        }
    }

    if(winner){
        for(int i=0;i<nombres.size();i++){
            printf("%s wins!\n",nombres[i].c_str());
        }
    }else{
        printf("No winner!\n");
    }
    return 0;
}