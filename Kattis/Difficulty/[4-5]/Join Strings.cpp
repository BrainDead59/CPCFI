//Kattis

#include <iostream> 
#include <string>  
#include <vector>  
#include <algorithm> 
#include <set>
#include <sstream> 
#include <utility> 

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pi;

void imprimir(vector<vector<int>> &B,vector<string> &A,int pos){
    cout << A[pos];
    if(B[pos].size()>0){
        for(int i=0;i<B[pos].size();i++){
            imprimir(B,A,B[pos][i]);
        }
    }
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;
    vs A(n);
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    int a,b;
    vector<vector<int>> B(n,vector<int>());
    for(int i=0;i<n-1;i++){
        cin >> a >> b;
        a--;
        b--;
        B[a].push_back(b);
    }
    imprimir(B,A,a);
    cout << "\n";
    return 0;
}