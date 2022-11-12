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
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string val="";
        vi b(5);
        for(int j=0;j<5;j++){
            cin >> b[j];
        }
        sort(b.begin(),b.end());
        for(auto z:b){
            val+=to_string(z);
        }
        a[val]+=1;
    }
    int maxi=0;
    for(auto z:a){
        maxi=max(maxi,z.second);
    }
    int sol=0;
    for(auto z:a){
        if(z.second==maxi){
            sol+=z.second;
        }
    }
    cout << sol;
    return 0;
}
