//Kattis

#include <bitset>  
#include <iostream> 
#include <string>  
#include <vector>  
#include <unordered_map>
#include <map>
#include <algorithm> 
#include <set>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef pair<int,int> pi;

bool comparacion(string A, string B){
    for(int i=0;i<A.size();i++){
        if(tolower(A[i])>tolower(B[i])) return false;
        if(tolower(A[i])<tolower(B[i])) return true; // indica si el primer elemento debe de ir antes que el segundo
    }
    return false;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int r,c;
    while(true){
        cin >> r >> c;
        if(r==0 && c==0){
            break;
        }
        vector<string> vs(c,"");
        string val;
        for(int i=0;i<r;i++){
            cin >> val;
            for(int j=0;j<c;j++){
                vs[j]+=(val[j]);
            }
        }
        stable_sort(vs.begin(),vs.end(),comparacion);

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout << vs[j][i];
            }
            cout << "\n";
        }
        cout << "\n";
    }
      
	return 0;
}
