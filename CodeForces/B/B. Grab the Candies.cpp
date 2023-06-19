//Codeforces: Grab the Candies
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

    int t,n,q;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n >> q;
        vi a(n);
        int l,r,k;
        for(int j=0;j<n;j++){
            cin >> a[j];
        }
        for(int j=0;j<q;j++){
            cin >> l >> r >> k;
            int suma=k*(r-l+1);
            for(int z=0;z<l-1;z++){
                suma+=a[z];
            }
            for(int z=r;z<n;z++){
                suma+=a[z];
            }
            if(suma%2){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}