//CSES: Restaurant Customers
//g++ -std=c++17 -o a b.cpp
//Default c++14

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef pair<pii,pii> ppii;
typedef map<int,int> mii;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    // int n,maxi=0;
    // cin >> n;
    // mii a;
    // for(int i=0;i<n;i++){
    //     int entrada,salida;
    //     cin >> entrada >> salida;
    //     a[entrada]++;
    //     a[salida]++;
    //     entrada++;
    //     while(entrada < salida){
    //         a[entrada]++;
    //         entrada++;
    //     }
    //     for(auto z:a){
    //         maxi=max(maxi,z.second);
    //     }
    // }
    // cout << maxi << "\n";

    vector<pii> a;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int entrada,salida;
        cin >> entrada >> salida;
        a.push_back({entrada,1});
        a.push_back({salida,-1});
    }

    sort(a.begin(),a.end());

    int maxi=0,suma=0;
    for(int i=0;i<n*2;i++){
        suma+=a[i].second;
        maxi=max(maxi,suma);
    }

    cout << maxi << "\n";

    return 0;
}
