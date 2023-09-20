//Codeforces
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

    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        vi val(n);
        val[0]=1;
        val[1]=3;
        for(int j=2;j<n;j++){
            val[j]=(val[j-1]+val[j-2])/2;
            while((val[j]*3)%(val[j-1]+val[j-2])==0 || val[j]<val[j-1]+1){
                val[j]+=1;
            }
        }
        for(int j=0;j<n;j++){
            cout << val[j] << " ";
        }
        cout << "\n";
    }
    return 0;
}