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
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        bitset<30> A(b);
        int contador=0;
        for(int i=0;i<a;i++){
            if(A[i]==1){
                contador++;
            } 
        }
        if(contador==a){
            cout << "Case #" << i+1 << ": ON\n";
        }else{
            cout << "Case #" << i+1 << ": OFF\n";
        }
    }

	return 0;
}
