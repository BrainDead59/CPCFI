//Codeforces: Escalator Conversations 
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
        int n,m,k,h,contador=0;
        cin >> n >> m >> k >> h;
        for(int j=0;j<n;j++){
            int altura;
            cin >> altura;
            int diferencia=abs(altura-h);
            for(int z=1;z<=m;z++){
                for(int b=1;b<=m;b++){
                    if(z!=b){
                        if(abs(z-b)*k==diferencia){
                            contador++;
                            b=m+1;
                            z=m+1;
                        }
                    }
                }
            }
        }
        cout << contador << endl;
    }
    return 0;
}