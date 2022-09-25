//Kattis: EpigDanceOff

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
    vector<vector<char>> a(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }

    int contador=0;
    for(int i=0;i<m;i++){
        int bajo=0;
        for(int j=0;j<n;j++){
            if(a[j][i]=='_'){
                bajo++;
            }else{
                bajo--;
            }
        }
        if(bajo==n){
            contador++;
        }
    }

    cout << contador + 1;
	return 0;
}