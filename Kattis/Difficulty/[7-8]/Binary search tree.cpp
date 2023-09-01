//Kattis: Binary search tree
//g++ -std=c++17 -Binary search treeo a b.cpp
//Default c++17

#include <bitset>  
#include <iostream> 
#include <string>  
#include <vector>  
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <algorithm> 
#include <sstream> 
#include <numeric> 
#include <list>
#include <stack>
#include <deque>
#include <queue>
#include <iomanip> 
#include <math.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef map<int,int> mii;

#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;
    long long total=0;
    cin >> t;
    set<int> valores;
    vi nivel(t,0);
    for(int i=0;i<t;i++){
        int valor;
        cin >> valor; 
        valores.insert(valor);

        int altura=0;
        if(i==0){
            nivel[valor-1]=1;
            cout << total << endl;
        }else{
            auto it1 = valores.find(valor);
            auto it2 = valores.find(valor);
            if(it1!=valores.begin()){
                it1--;
                altura = max(nivel[*it1-1], altura);
            }
            if(it2!=valores.end()){
                it2++;
                if(it2!=valores.end()){
                    altura = max(nivel[*it2-1], altura);
                }
            }
            total += altura;
            nivel[valor-1]=altura+1;
            cout << total << endl;
        }
    }
    return 0;
}