// Kattis

#include <bitset>  
#include <iostream> 
#include <string>  
#include <vector>  
#include <unordered_map>
#include <map>
#include <algorithm> 
#include <set>
#include <sstream> 
#include <stack>

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

    while(true){
        int n;
        cin >> n;
        if(n==0){
            break;
        }
        int pA=0,pB=0;
        for(int i=0;i<n;i++){
            string op;
            int platos;
            cin >> op >> platos;
            if(op=="DROP"){
                pB+=platos;
                cout << "DROP 2 " << platos << "\n";
            }
            if(op=="TAKE"){
                if(pA==0){
                    pA=pB-platos;
                    cout << "MOVE 2->1 " << pB << "\n";
                    cout << "TAKE 1 " << platos << "\n";
                    pB=0;
                }else if(pA>0  && pA<platos){
                    platos-=pA;
                    cout << "TAKE 1 " << pA << "\n";
                    pA=pB-platos;
                    cout << "MOVE 2->1 " << pB << "\n";
                    cout << "TAKE 1 " << platos << "\n";
                    pB=0;
                }else{
                    cout << "TAKE 1 " << platos << "\n";
                    pA-=platos;
                }
            }
        }
        cout << "\n";
    }
	return 0;
}
