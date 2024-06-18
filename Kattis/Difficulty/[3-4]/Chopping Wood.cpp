//Kattis
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
    vector<int> grado(200001,0); //apariciones en la secuencia
    vector<int> val(200001); //secuencia
    vector<int> sol(200001);
    priority_queue<int, vector<int>, greater<int>> values;
    for(int i=1;i<=t+1;i++){
        grado[i]++;
    }

    for(int i=1;i<=t;i++){
        cin >> val[i];
        grado[val[i]]++;
    }

    for(int i=1;i<=t;i++){
        if(grado[i]==1) values.push(i); //Son hojas
    }

    for(int i=1;i<=t;i++){
        if (values.empty()){
            cout << "Error";
            return 0;
        }
        sol[i]=values.top();
        
        grado[val[i]]--; //Elimina un grado por la conexión que se establece
        grado[values.top()]--; //Valor con solo un grado y se hace cero

        values.pop();
        if (grado[val[i]]==1){
            values.push(val[i]);
        }
    }

    for (int i=1;i<=t;i++){
        if (grado[i] != 0){
            cout << "Error";
            return 0;
        }
    }

    for (int i=1;i<=t;i++){
        cout << sol[i] << "\n";
    }

    return 0;
}