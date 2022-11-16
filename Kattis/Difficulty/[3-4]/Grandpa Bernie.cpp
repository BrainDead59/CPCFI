//Kattis
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
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    unordered_map<string,vi> a;
    int n,year;
    string val;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> val >> year;
        a[val].push_back(year);
    }
    cin >> n;
    for(auto &z:a){
        sort(z.second.begin(),z.second.end());
    }
    for(int i=0;i<n;i++){
        cin >> val >> year;
        cout << a[val][year-1] << "\n";
    }
    return 0;
}
