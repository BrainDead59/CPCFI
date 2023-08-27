//CSES: Playlist
//g++ -std=c++17 -o a b.cpp
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

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
 
    int n;
    cin >> n;
    vector<int> valores(n);
    for(int i=0;i<n;i++){
        cin >> valores[i];
    }
 
    int maximo=0,i=0,j=0;
    unordered_set<int> unicos;
    while(i<n && j<n){
        while(j<n && !unicos.count(valores[j])){
            unicos.insert(valores[j]);
            maximo=max(maximo,j-i+1);
            j++;
        }
        while(j<n && unicos.count(valores[j])){
            unicos.erase(valores[i]);
            i++;
        }
    }
    cout << maximo;
    return 0;
}
