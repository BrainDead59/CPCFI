// Kattis: Flow Shop

#include <bitset>  
#include <iostream> 
#include <string>  
#include <vector>  
#include <unordered_map>
#include <map>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }

    for(int i=1;i<m;i++){
        a[0][i]+=a[0][i-1];
    }

    for(int i=1;i<n;i++){
        a[i][0]+=a[i-1][0];
    }

    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            a[i][j]+=max(a[i-1][j],a[i][j-1]);
        }
    }

    for(int i=0;i<n;i++){
        cout << a[i][m-1] << " ";
    }

	return 0;
}
