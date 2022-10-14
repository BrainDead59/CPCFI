//Kattis

#include <iostream> 
#include <string>  
#include <vector>  
#include <algorithm> 
#include <sstream> 

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pi;


class cmp {
    int pos;
public:
    cmp(int p) : pos(p) {}

    bool operator()(vector<string> A, vector<string> B){
        if(A[pos]<B[pos]) return true;
        if(A[pos]>B[pos]) return false;
        return false;
    }
};



int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    
    string entrada,elemento;
    vs atributos;
    int n,order;
    getline(cin,entrada);
    istringstream ss(entrada);
    while(getline(ss, elemento,' ')){ 
        atributos.push_back(elemento);
    }
    cin >> n;
    vector<vector<string>> A(n,vector<string>());
    for(int i=0;i<n;i++){
        for(int j=0;j<atributos.size();j++){
            cin >> entrada;
            A[i].push_back(entrada);
        }
    }
    cin >> order;
    for(int i=0;i<order;i++){
        cin >> entrada;
        int pos;
        for(int j=0;j<atributos.size();j++){
            if(atributos[j]==entrada){
                pos=j;
                break;
            }
        }
        sort(A.begin(),A.end(),cmp(pos));
        for(auto at:atributos){
            cout << at << " ";
        }
        cout << "\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<atributos.size();j++){
                cout << A[i][j] << " ";
            }
            cout << "\n";
        }
        if(i<order-1) {
            cout << "\n";
        }
    }
	return 0;
}

