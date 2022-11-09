//Codeforces

#include <bitset>  
#include <iostream> 
#include <string>  
#include <vector>  
#include <unordered_map>
#include <map>
#include <algorithm> 
#include <set>
#include <sstream> 

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
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

   int t;
   string val;
   cin >> t;
   getline(cin,val);
   getline(cin,val);
   for(int i=0;i<t;i++){
        vs A;
        for(int j=0;j<9;j++){
            if(j==8){
                getline(cin,val);
            }else{
                getline(cin,val);
                A.push_back(val);
            }
        }
        int contadorR=0;
        for(int k=0;k<8;k++){
            for(int z=0;z<8;z++){
                if(A[k][z]=='R'){
                    contadorR++;
                }
            }
            if(contadorR!=8) contadorR=0;
            else if(contadorR==8) break;
        }
        int contadorB=0;
        for(int k=0;k<8;k++){
            for(int z=0;z<8;z++){
                if(A[z][k]=='B'){
                    contadorB++;
                }
            }
            if(contadorB!=8) contadorB=0;
            else if(contadorB==8) break;
        }
        if(contadorB==8){
            cout << "B\n";
        }
        if(contadorR==8){
            cout << "R\n";
        }
   }

	return 0;
}
