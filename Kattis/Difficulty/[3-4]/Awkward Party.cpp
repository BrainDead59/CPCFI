//Kattis: Awkward Party
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

#define endl '\n'

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;
    cin >> t;
    vi valores(t);
    unordered_map<int,vi> sillas;
    for(int i=0;i<t;i++){
        cin >> valores[i];
        sillas[valores[i]].push_back(i);
    }

    int maxi=t;
    for(auto z: sillas){
        for(int i=1;i<z.second.size();i++){
            maxi= min(maxi,z.second[i]-z.second[i-1]);
        }
    }

    cout << maxi;
    return 0;
}