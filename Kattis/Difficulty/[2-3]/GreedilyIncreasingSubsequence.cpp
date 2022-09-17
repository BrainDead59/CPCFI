//Kattis: Greedily Increasing Subsequence

#include <iostream> 
#include <vector> 

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int elementos,elemento,maximo=0;
    vi B;
    cin >> elementos;
    for(int i=0;i<elementos;i++){
        cin >> elemento;
        if(maximo<elemento){
            maximo=elemento;
            B.push_back(elemento);
        }
    }

    cout << B.size() << "\n";
    for(auto it : B){
        cout << it << " ";
    }
    return 0;
}