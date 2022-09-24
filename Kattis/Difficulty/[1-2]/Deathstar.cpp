//Kattis

#include <bitset>  
#include <iostream> 
#include <string>  
#include <vector>  
#include <unordered_map>
#include <map>
#include <algorithm> 
#include <set>
#include <sstream> 

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pi;
typedef map<int,int> mi;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int n;
    cin >> n;
    vi A(n,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int val;
            cin >> val;
            A[i]|=val; //por prueba y error &= y ^= no pasan
        }
    }
    for(auto i:A){
        cout << i << " ";
    }

	return 0;
}
