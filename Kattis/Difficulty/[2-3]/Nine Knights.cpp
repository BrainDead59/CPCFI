//Kattis: Nine Knights.

#include <bitset>  
#include <iostream> 
#include <string>  
#include <vector>  
#include <unordered_map>
#include <map>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    vector<vector<char>> a(9,vector<char>(9));
    int caballos=0;
    for(int i=2;i<7;i++){
        for(int j=2;j<7;j++){
            cin >> a[i][j];
            if(a[i][j]=='k'){
                caballos++;
            }
        }
    }	

    if(caballos==9){
        for(int i=2;i<7;i++){
            for(int j=2;j<7;j++){
                if(a[i][j]=='k'){
                    if(a[i-1][j-2]=='k' || a[i-2][j-1]=='k' || a[i-2][j+1]=='k'  || a[i-1][j+2]=='k' || a[i+1][j-2]=='k' || a[i+2][j-1]=='k' || a[i+1][j+2]=='k' || a[i+2][j+1]=='k'){
                        cout << "invalid";
                        return 0;
                    }
                }
            }
        }
        cout << "valid";
    }else{
        cout << "invalid";
    }
    return 0;
}
