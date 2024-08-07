//A. Card Exchange - Codeforces
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
    for(int i=0;i<t;i++){
        int n,k;
        cin >> n >> k;

        bool bandera = false;
        vector<int> valores(n);
        map<int,int> apariciones; 

        for(int i=0;i<n;i++){
            cin >> valores[i];
            apariciones[valores[i]]++;
            if(apariciones[valores[i]]==k){
                bandera = true;
            }
        }
        if(!bandera){
            cout << n << endl;
        }else{
            cout << k-1 << endl;
        }
    }
    return 0;
}