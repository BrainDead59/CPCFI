//TLE
//g++ -std=c++17 -o a b.cpp
//Default c++17

#include <bitset>  
#include <iostream> 
#include <string>  
#include <vector>  
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <algorithm> 
#include <sstream> 
#include <numeric> 
#include <list>
#include <stack>
#include <deque>
#include <queue>
#include <iomanip> 
#include <math.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef map<int,int> mii;

#define endl '\n'

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,solucion=0;
        cin >> n;
        vector<int> values;
        vector<bool> calculado(n,false);
        for(int j=0;j<n;j++){
            int valor;
            cin >> valor;
            values.push_back(valor);
            for(int k=0;k<values.size();k++){
                if(values.size()==1 && values[k]==0 && calculado[values.size()-1]==false && k==0){
                    solucion++;
                    calculado[k]=true;
                }
                if(values.size()==2 && values[k]==values[0] && calculado[values.size()-1]==false && k==1){
                    solucion++;
                    calculado[k]=true;
                }
                if(values.size()>=3 && calculado[values.size()-1]==false && k>=2){
                    for(int z=0;z<values.size();z++){
                        int derecha=values.size()-1,izquierda=0;
                        ll sumaValor=0;
                        while(derecha!=z && derecha>=0){
                            sumaValor+=values[derecha];
                            derecha--;
                        }

                        while(izquierda!=z && izquierda<values.size()){
                            sumaValor+=values[izquierda];
                            izquierda++;
                        }

                        if(values[z]==sumaValor){
                            solucion++;
                            calculado[values.size()-1]=true;
                            break;
                        }
                    }
                }
            }
        }
        cout << solucion << endl;
        solucion=0;
    }

    return 0;
}