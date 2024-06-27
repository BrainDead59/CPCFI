//Facebook-Practice
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
        int s,d,k,carne=0,tapa=0;
        cin >> s >> d >> k;
        carne=s*1+d*2;
        tapa=s*2+d*2;
        if(tapa>=k+1){
            if(carne>=k){
                cout << "Case #" << i+1 << ":" <<  "YES\n";
            }else{
                cout << "Case #" << i+1 << ":" <<  "NO\n";
            }
        }else{
            cout << "Case #" << i+1 << ":" <<  "NO\n";
        }
    }
    return 0;
}