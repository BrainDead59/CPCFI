//B. Rectangle Filling - Codeforces
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
        int n,m;
        string saltoN;
        cin >> n >> m;
        getline(cin,saltoN);

        vector<string> renglones(n);
        for(int j=0;j<n;j++){
            getline(cin,renglones[j]);
        }

        if(n==1 && m==1){
            cout << "YES" << endl;
        }else if(n==1){
            if(renglones[0][0]==renglones[0][m-1]){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else if(m==1){
            if(renglones[0][0]==renglones[n-1][0]){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else{
            bool contadorWU=false, contadorWD=false, contadorWL=false, contadorWR=false;
            bool contadorBU=false, contadorBD=false, contadorBL=false, contadorBR=false;
            for(int j=0;j<n;j++){
                if(renglones[j][0]=='W') contadorWL=true;
                if(renglones[j][0]=='B') contadorBL=true;
                if(renglones[j][m-1]=='W') contadorWR=true;
                if(renglones[j][m-1]=='B') contadorBR=true;
                if(j==0){
                    for(int k=0;k<renglones[j].size();k++){
                        if(renglones[j][k]=='W') contadorWU=true;
                        if(renglones[j][k]=='B') contadorBU=true;
                        if(contadorWU==true && contadorBU==true) break;
                    }
                }else if(j==n-1){
                    for(int k=0;k<renglones[j].size();k++){
                        if(renglones[j][k]=='W') contadorWD=true;
                        if(renglones[j][k]=='B') contadorBD=true;
                        if(contadorWD==true && contadorBD==true) break;
                    }
                }
            }
            if(contadorWU==true && contadorWD==true && contadorWL==true && contadorWR==true){
                cout << "YES" << endl;
            }else if(contadorBU==true && contadorBD==true && contadorBL==true && contadorBR==true){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}