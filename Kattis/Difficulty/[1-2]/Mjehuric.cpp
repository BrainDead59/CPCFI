//Kattis

#include <iostream> 
#include <vector>  
#include <algorithm> 

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef pair<int,int> pi;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    vi A(5,0);
    for(int i=0;i<5;i++){
        cin >> A[i];
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            if(A[j]>A[j+1]){ 
                swap(A[j],A[j+1]); //2 3 4 5 1
                for(auto a:A){
                    cout << a << " ";
                }
                cout << "\n";
            }
        }
    }
	return 0;
}
