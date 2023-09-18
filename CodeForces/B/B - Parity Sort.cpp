//Codeforces: Parity Sort
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
        int n;
        cin >> n;
        vi valores(n);
        bool bandera=false;
        for(int j=0;j<n;j++){
            cin >> valores[j];
            if(j>0){
                if(valores[j-1]>valores[j]){
                    bandera=true;
                }
            }
        }
        if(bandera==true){
            for(int j=0;j<n;j++){
                if(valores[j]%2==1){
                    for(int k=j+1;k<n;k++){
                        if(valores[k]%2==1){
                            if(valores[j]>valores[k]){
                                swap(valores[j],valores[k]);
                            }
                        }
                    }
                }else{
                    for(int k=j+1;k<n;k++){
                        if(valores[k]%2==0){
                            if(valores[j]>valores[k]){
                                swap(valores[j],valores[k]);
                            }
                        }
                    }
                }
            }
            bool bandera=true;
            for(int j=0;j<n;j++){
                if(j>0){
                    if(valores[j-1]>valores[j]){
                        bandera=false;
                    }
                }
            }

            if(bandera){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }

        }else{
            cout << "YES" << endl;
        }
        
    }
    return 0;
}