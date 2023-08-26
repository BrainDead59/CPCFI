//CSES: Sum of Two Values
//g++ -std=c++17 -o a b.cpp
//Default c++14

#include <algorithm>
#include <bitset>  
#include <iostream> 
#include <vector>  
#include <map>
#include <string>  
#include <set>
#include <unordered_set>
#include <unordered_map>
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

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int a,b;
    cin >> a >> b;
    mii valorPosicion;
    vi values;
    for(int i=0;i<a;i++){
        int valor;
        cin >> valor;
        values.push_back(valor);
        valorPosicion[valor]=i+1;
    }
    bool bandera=true;
    for(int i=0;i<a;i++){
        int buscar = b - values[i];
        if(valorPosicion[buscar]){
            if(i+1==valorPosicion[buscar]){
                continue;
            }
            cout << i+1 << " " << valorPosicion[buscar];
            bandera=false;
            break;
        }
    }
    if(bandera){
        cout << "IMPOSSIBLE" ;
    }
    return 0;
}
