//Codeforces: Plus or Minus
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

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t,n;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        int sumaP=0;
        int sumaI=0;
        int val;
        for(int j=0;j<n;j++){
            cin >> val;
            if(val%2==0){
                sumaP+=val;
            }else{
                sumaI+=val;
            }
        }
        if(sumaP>sumaI){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}
