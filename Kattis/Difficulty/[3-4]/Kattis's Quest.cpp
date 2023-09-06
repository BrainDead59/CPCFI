//Kattis: 	Kattis's Quest
//g++ -std=c++17 -o a b.cpp
//Default c++17

// Cuando ya no se tienen valores menores a la energia de la query la funcion lower_bound regresa el mayor
// inmediato superior lo que se traduce en que si el valor del inicio del map es mayor al valor de la
// energia, ya no se puede realizar esa quests y se tienen que salir del while.

// En el otro caso cuando se tiene un valor mayor en la query a los que existen en el map y el valos no 
// existe dentro del map, lower_bound no encuentra apuntador por lo tanto es necesario insertar un valor 
// mayor al maximo, con esto aseguramos que cuando se tenga un valor mayor la funcion regrese una posición 
// de iterador valida y que al hacer el ajuste del tamaño de la energía nos encontremos con localidades 
// del map que tienen valores insertados.


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
    map<long int,priority_queue<int>> mp;
    mp[100001].push(0);
    for(int i=0;i<t;i++){
        string comando;
        cin >> comando;
        if(comando=="add"){
            int e,g;
            cin >> e >> g;
            mp[e].push(g);
        }
        if(comando=="query"){
            int find;
            ll contador=0;
            cin >> find;
            while(true){
                auto it = mp.lower_bound(find);
                if(it->first > find){
                    it--;
                }
                if(find < mp.begin()->first || mp.size()==0){
                    break;
                }
                contador+=it->second.top();
                find-=it->first;
                it->second.pop();
                if(it->second.size()==0){
                    mp.erase(it);
                }
            }
            cout << contador << endl;
        }
    }
    return 0;
}