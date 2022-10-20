//Kattis

#include <iostream> 
#include <string>  
#include <vector>  
#include <algorithm> 

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef pair<int,int> pi;

bool comparacion(string A, string B){
    for(int i=0;i<2;i++){
        if(A[i]>B[i]){
            return false;
        }else if(A[i]<B[i]){
            return true;
        }
    }
    return false;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    
    int n;
    while(true){
        cin >>  n;
        if(n==0){
            break;
        }
        vector<string> vs(n,"");
        for(int i=0;i<n;i++){
            cin >> vs[i];
        }
        stable_sort(vs.begin(),vs.end(),comparacion);
        for(auto a: vs){
            cout << a << "\n";
        }
        cout << "\n";
    }

	return 0;
}
