//
//g++ -std=c++17 -o a b.cpp

#include <bitset>  
#include <iostream> 
#include <string>  
#include <vector>  
#include <map>
#include <unordered_map>
#include <algorithm> 
#include <sstream> 
#include <numeric> 
#include <list>
#include <stack>
#include <deque>
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
        map<string,int> a;
        int cases;
        cin >> cases;
        for(int k=0;k<cases;k++){
            string name;
            int val;
            cin >> name >> val;
            a[name]+=val;
            for(int j=0;j<val;j++){
                cin >> name;
                a[name]-=1;
            }
        }
        int dias=0,inter=0;
        for(auto z:a){
            if(z.second>0){
                dias=max(dias,z.second);
                inter+=z.second;
            }
        }
        cout << inter << " " << dias << "\n";
    }
    return 0;
}
