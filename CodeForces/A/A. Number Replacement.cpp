//
//g++ -std=c++17 -o a b.cpp

#include <bitset>  
#include <iostream> 
#include <string>  
#include <vector>  
#include <unordered_map>
#include <map>
#include <algorithm> 
#include <set>
#include <sstream> 
#include <stack>
#include <numeric> 
#include <queue>

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
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        vi a(n);
        for(int j=0;j<n;j++){
            cin >> a[j];
        }
        string st,check="";
        cin >> st;
        map<int,char> mm;
        for(int j=0;j<n;j++){
            mm[a[j]]=st[j];
        }
        for(int j=0;j<n;j++){
            check+=mm[a[j]];
        }
        if(st==check){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
	return 0;
}
