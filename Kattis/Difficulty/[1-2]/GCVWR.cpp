//Kattis: GCVWR

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
    
    int t,g,n,suma=0,aux;
    cin >> g >> t >> n;
    for(int i=0;i<n;i++){
        cin >> aux;
        suma+=aux;
    }
    float posible;
    posible=(g-t)*0.9;
    cout << posible-suma;
	return 0;
}