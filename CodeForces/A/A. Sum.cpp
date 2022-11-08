//Codeforces

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
        int a,b,c;
        cin >> a >> b >> c;
        if(a+b==c){
            cout << "YES\n";
        }else if(b+c==a){
            cout << "YES\n";
        }else if(c+a==b){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }

	return 0;
}
