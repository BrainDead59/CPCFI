// Codeforces
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
    
    int t,mini=100;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        vector<int> vals;
        for(int j=0;j<n;j++){
            int val;
            cin >> val;
            vals.push_back(val);
        }
        int mini=10,pos=0,contador=0;
        for(auto z: vals){
            if(z<mini){
                pos = contador;
                mini = z;
            }
            contador++;
        }
        vals[pos]+=1;
        
        int valores=1;
        for(int j=0;j<n;j++){
            valores*=vals[j];
        }
        cout << valores << "\n";
    }
    return 0;
}