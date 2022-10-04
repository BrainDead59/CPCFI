//Kattis

#include <bitset>  
#include <iostream> 
#include <string>  
#include <vector>  
#include <unordered_map>
#include <map>
#include <algorithm> 

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef pair<int,int> pi;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
      
    int n,k;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> k;
        vi A(20,0);
        for(int j=0;j<20;j++){
            cin >> A[j];
        }

        int cambios=0;
        for(int j=1;j<20;j++){
            int z=j-1;
            int valor=A[j];
            while(z>=0 && A[z]>valor){
                A[z+1]=A[z];
                z-=1;
                cambios++;
            }
            A[z+1]=valor;  
        }
        cout << k << " " << cambios << "\n";
    }
	return 0;
}
