//Kattis: Alphabet Spam
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

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    string cadena;
    cin >> cadena;
    float sub=0,mayus=0,minus=0,caracter=0;
    for(int i=0;i<cadena.size();i++){
        if(cadena[i]=='_'){
            sub++;
            continue;
        }
        if(cadena[i]-'A'>-1 && cadena[i]-'A'<26){
            mayus++;
            continue;
        }
        if(cadena[i]-'a'>-1 && cadena[i]-'a'<26){
            minus++;
            continue;
        }
        caracter++;
    }
    cout << sub/cadena.size() << "\n" << minus/cadena.size() << "\n" << mayus/cadena.size() << "\n"<< caracter/cadena.size() << "\n";
    return 0;
}