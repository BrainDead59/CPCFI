//CSES: Apartments
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

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int n,m,k;
    vector<int> a;
    vector<int> b;
    cin >> n >> m >> k;
    for(int i=0;i<n;i++){
        int tam;
        cin >> tam;
        a.push_back(tam);
    }
    for(int i=0;i<m;i++){
        int tam;
        cin >> tam;
        b.push_back(tam);
    }
    sort(b.begin(),b.end());
    sort(a.begin(),a.end());

    int cont=0,i=0,j=0;
    while(i<n && j<m){
        if(abs(a[i]-b[j])<=k){
            i++;
            j++;
            cont++;
        }else{
            if(a[i]-b[j]>k){
                j++;
            }else{
                i++;
            }
        }
    }
    cout << cont;
    return 0;
}
