//Kattis
//g++ -std=c++17 -o a b.cpp

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

    int r,n;
    cin >> r >> n;
    vector<bool> a(r,false);
    for(int i=0;i<n;i++){
        int c;
        cin >> c;
        a[c-1]=true;
    }
    for(int i=0;i<a.size();i++){
        if(a[i]==false){
            cout << i+1;
            return 0;
        }
    }
    cout << "too late";
    return 0;
}
