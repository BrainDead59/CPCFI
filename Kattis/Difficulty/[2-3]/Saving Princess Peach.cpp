//Kattis: Saving Princess Peach
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

    int n,y;
    cin >> n >> y;
    vi valores(n,-1);
    unordered_set<int> valoresUni;
    for(int i=0;i<y;i++){
        int val;
        cin >> val;
        valoresUni.insert(val);
    }
    for(int i=0;i<n;i++){
        valores[i]=i;
    }
    for(auto z: valoresUni){
        if(valores[z]!=-1){
            valores[z]=-1;
        }
    }
    for(auto z: valores){
        if(z!=-1){
            cout << z << "\n";
        }
    }
    cout << "Mario got " << valoresUni.size() << " of the dangerous obstacles.";
    return 0;
}