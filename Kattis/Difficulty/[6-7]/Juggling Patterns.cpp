//Kattis: Juggling Patterns
//g++ -std=c++17 -o a b.cpp
//Default c++14

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
#include <cmath>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef map<int,int> mii;


int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    string sequence;
    while(getline(cin,sequence)){
        int balones = 0;
        for(int i=0;i<sequence.size();i++){
            balones += sequence[i] - '0';
        }
        if(balones % sequence.size() == 0){
            set<int> orden;
            for(int i=0;i<sequence.size();i++){
                int tiempo = sequence[i] - '0' + i;
                orden.insert(tiempo % sequence.size());
            }
            if(orden.size() % sequence.size() == 0){
                cout << sequence <<": valid with " << balones/sequence.size() << " balls" << "\n" ;
            }else{
                cout << sequence <<": invalid pattern" << "\n" ;
            }
        }else{
            cout << sequence <<": invalid # of balls" << "\n" ;
        }
    }
    return 0;
}

//lanza con la izquierda siempre
//par lanza a la misma mano
//impar lanza a la otra mano
//alterna manos al lanzar
//puede lanzar y recibir con la misma mano