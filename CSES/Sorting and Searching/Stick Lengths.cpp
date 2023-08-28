//CSES: Stick Lengths
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

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int n;
    cin >> n;
    vi A(n);
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    sort(A.begin(),A.end());
    long long int valorMedio = A[n/2], suma=0;
    for(int i=0;i<n;i++){
        suma+= abs(A[i]-valorMedio);
    }
    cout << suma;
    
    return 0;
}
