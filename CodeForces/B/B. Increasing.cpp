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

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int m;
        bool state =false;
        cin >> m;
        mii A;
        for(int j=0;j<m;j++){
            int val;
            cin >> val;
            A[val]++;
            if(A[val]>1){
                state=true;
            }
        }
        if(state){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }


	return 0;
}
