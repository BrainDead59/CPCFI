//Kattis: Quick Brown Fox
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

    int t;
    string salto;
    cin >> t;
    getline(cin, salto);
    for(int i=0;i<t;i++){
        string cadena,original="abcdefghijklmnopqrstuvwxyz";
        getline(cin, cadena);
        for(int j=0;j<cadena.length();j++){
            cadena[j]=tolower(cadena[j]);
            int pos=original.find(cadena[j]);
            if(pos!=-1){
                original.erase(original.begin()+pos);
            }
        }
        if(original.size()==0){
            cout << "pangram" << "\n";
        }else{
            cout << "missing " << original << "\n";
        }

    }
    return 0;
}