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

    int h;
    string p;
    cin >> h >> p;
    int raiz=1;
    for(int i=0;i<p.size();i++){
        if(p[i]=='R'){
            raiz=(raiz<<1)+1;
        }else{
            raiz=(raiz<<1);
        }
    } 
    cout << (1<<h+1)-raiz;
    
    return 0;
}
