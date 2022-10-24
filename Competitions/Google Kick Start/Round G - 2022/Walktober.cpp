//KS - Round G 2022 

#include <bitset>  
#include <iostream> 
#include <string>  
#include <vector>  
#include <unordered_map>
#include <map>
#include <algorithm> 
#include <set>
#include <sstream> 
#include <stack>

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
        int m,n,p;
        cin >> m >> n >> p;
        vector<vector<int>> A(m,vector<int>(n));
        for(int j=0;j<m;j++){
            for(int k=0;k<n;k++){
                cin >> A[j][k];
            }
        }
        vi B;
        for(int j=0;j<n;j++){
            int maxi=0;
            for(int k=0;k<m;k++){
                maxi=max(maxi,A[k][j]);
            }
            B.push_back(maxi);
        }
        int contador=0;
        for(int j=0;j<n;j++){
            contador+=B[j]-A[p-1][j];
        }
        cout << "Case #" << i+1 << ": " << contador << "\n";   
    }
	return 0;
}
