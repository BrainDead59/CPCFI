#include <bitset>   //bitset
#include <iostream> //cin, out
#include <string>   //manejo de cadenas
#include <vector>   //manejor de vectores

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

//0 1
//00 01 10 11
//000 001 010 011 100 101 110 111
//0000 0001 0010 0011 0100 0101 0110 0111 


int main(){
    ios::sync_with_stdio(0);  //Se pierde la sincronizacion entre los C y C++
    cin.tie(0); //Las salidas se limpian antes de la entrada

	int n;
	cin >> n;
    for(int i=0;i<(1<<n);i++){
        int value = i^(i>>1);
        bitset<32> b(value);
        string sol = b.to_string();
        for(int j=32-n;j<32;j++){
            cout << sol[j];
        }
        cout << "\n";
    }
	return 0;
}