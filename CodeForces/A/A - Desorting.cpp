//Codeforces: A. Desorting
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

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        vector<int> A(n);
        bool bandera = false;
        for(int j=0;j<n;j++){
            cin >> A[j];
            if(j>0){
                if(A[j-1]>A[j]){
                    cout << 0 << "\n";
                    bandera =true;
                    break;
                }
            }
        }
        if(bandera){
            continue;
        }else{
            int mini=1000000000,cont=0;
            for(int j=0;j<n-1;j++){
                int a=A[j],b=A[j+1];
                while(A[j]<=A[j+1]){
                    A[j]++;
                    A[j+1]--;
                    cont++;
                }
                mini=min(mini,cont);
                cont=0;
                A[j]=a;
                A[j+1]=b;
            }
            cout << mini << "\n";
        }
    }

    return 0;
}