//Kattis
//g++ -std=c++17 -o a b.cpp

#include <bitset>  
#include <iostream> 
#include <string>  
#include <vector>  
#include <map>
#include <unordered_map>
#include <algorithm> 
#include <sstream> 
#include <numeric> 
#include <list>
#include <stack>
#include <deque>
#include <queue>

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

    unordered_map<string,int> a;
    string name;
    while(true){
        getline(cin,name);
        if(name=="***"){
            break;
        } 
        a[name]+=1;
    }
    int maxi=0,contador=0;
    for(auto z:a){
        if(z.second>maxi){
            maxi=z.second;
            name=z.first;
        }
    }
    for(auto z:a){
        if(maxi==z.second){
            contador++;
        }
    }
    if(contador>1){
        cout << "Runoff!";
    }else{
        cout << name;
    }
    return 0;
}
