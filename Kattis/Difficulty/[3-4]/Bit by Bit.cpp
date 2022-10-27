//Kattis

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
typedef pair<int,int> pi;
typedef map<int,int> mi;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    
    int n;
    while(true){
        cin >> n;
        if(n==0){
            break;
        }
        string vc="????????????????????????????????";
        for(int i=0;i<n;i++){
            string op;
            cin >> op;
            if(op=="CLEAR"){
                int a;
                cin >> a;
                vc[a]='0';
            }else if(op=="SET"){
                int a;
                cin >> a;
                vc[a]='1';
            }else if(op=="OR"){
                int a,b;
                cin >> a >> b;
                if(vc[a]=='0' && vc[b]=='0'){
                    vc[a]='0';
                }else if(vc[a]=='1' || vc[b]=='1'){ //toma como comodin 
                    vc[a]='1';
                }else{
                    vc[a]='?';
                }
            }else if(op=="AND"){
                int a,b;
                cin >> a >> b;
                if(vc[a]=='1' && vc[b]=='1'){
                    vc[a]='1';
                }else if(vc[a]=='0' || vc[b]=='0'){ //toma como comodin
                    vc[a]='0';
                }else{
                    vc[a]='?';
                }
            }
        }
        reverse(vc.begin(),vc.end());
        cout << vc << "\n";
    }
	return 0;
}
