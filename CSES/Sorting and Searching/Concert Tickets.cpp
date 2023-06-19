//CSES - Concert Tickets
//g++ -std=c++17 -o a b.cpp
//Default c++14


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

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int n,m,val;
    cin >> n >> m;
    multiset<int> tick; //ordena

    for(int i=0;i<n;i++){
        cin >> val;
        tick.insert(val);
    }

    for(int i=0;i<m;i++){
        cin >> val;
        auto it = tick.upper_bound(val); //iterador al siguiente valor mayor o igual
        if(it == tick.begin()){ //Primera posición mayor al presupuesto.
            cout << "-1 \n";
        }else{
            cout << *(--it) << "\n";
            tick.erase(it);
        }
    }
    return 0;
}
