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

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
      
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        vs nombres;
        cin >> n;
        for(int j=0;j<n;j++){
            string nombre;
            string estatus;
            string clase;
            int contador=0; 
            cin >> nombre >> estatus >> clase;

            nombre=nombre.substr(0,nombre.size()-1);
            istringstream ss(estatus);
            string elemento,suma="",completa="";
            while(getline(ss, elemento,'-')) { // permite el usar la cadena como en java, como el tokenizer
                if(elemento=="upper"){
                    suma+=('1');       
                }else if(elemento=="middle"){
                    suma+=('2'); 
                }else if(elemento=="lower"){
                    suma+=('3'); 
                }
            }
            for(int i=0;i<10-suma.size();i++){
                completa+='2';
            }
            suma=completa+suma;
            reverse(suma.begin(),suma.end());
            suma+=nombre;
            nombres.push_back(suma);
        }
        sort(nombres.begin(),nombres.end());
        for(int j=0;j<n;j++){
            string name=nombres[j];
            name=name.substr(10,name.size());
            cout << name << "\n";
        }
        cout << "==============================\n";
    }
	return 0;
}
