// Kattis: Image Processing

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

    int h,w,n,m;
    cin >> h >> w >> n >> m;
    vector<vector<int>> a(h,vector<int>(w));
    vector<int> b(n*m);
    vector<vector<int>> c(h-n+1,vector<int>(w-m+1));

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> a[i][j];
        }
    }

    int pos=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> b[pos];
            pos++;
        }
    }

    for(int i=0;i<=h-n;i++){
        for(int j=0;j<=w-m;j++){
            int cuenta=n*m-1;
            int suma=0;
            for(int z=i;z<i+n;z++){
                for(int k=j;k<j+m;k++){   
                        suma+=b[cuenta]*a[z][k];
                    cuenta--;
                }
            }
            c[i][j]=suma;   
        }   
    }

    for(int i=0;i<=h-n;i++){
        for(int j=0;j<=w-m;j++){
            cout << c[i][j] << " ";   
        }   
        cout << "\n";
    }

	return 0;
}
