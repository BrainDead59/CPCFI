//Kattis

#include <bitset>  
#include <iostream> 
#include <string>  
#include <vector>  
#include <unordered_map>
#include <map>

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

    int w,l;
    int cont=0;
    while(true){
        cin >> w >> l;
        if(w==0 && l==0){
            break;
        }
        cont++;
        int inx,iny;
        char A[l][w];
        for(int i=0;i<l;i++){
            string s;
            cin >> s;
            for(int j=0;j<s.size();j++){
                A[i][j]=s[j];
                if(s[j]=='*'){
                    inx=i;
                    iny=j;
                }
            }
        }
        char mov;
        if(iny==0){
            mov='d'; //derecha
        }
        if(iny==w-1){
            mov='i'; //derecha
        }
        if(inx==0){
            mov='b'; //baja
        }
        if(inx==l-1){
            mov='s'; //sube
        }
        
        //inx: renglones iny: columnas
        while(A[inx][iny] !='x'){
            if(mov=='d'){
                iny++;
            }else if(mov=='i'){
                iny--;
            }else if(mov=='b'){
                inx++;
            }else if(mov=='s'){
                inx--;
            }

            if(A[inx][iny]=='/'){
                if(mov=='d'){
                    mov='s';
                }else if(mov=='i'){
                    mov='b';
                }else if(mov=='b'){
                    mov='i';
                }else if(mov=='s'){
                    mov='d';
                }
            }
            if(A[inx][iny]=='\\'){
                if(mov=='d'){
                    mov='b';
                }else if(mov=='i'){
                    mov='s';
                }else if(mov=='b'){
                    mov='d';
                }else if(mov=='s'){
                    mov='i';
                }
            }
        }
        A[inx][iny]='&';
        cout << "HOUSE " << cont << "\n";
        for(int i=0;i<l;i++){
            for(int j=0;j<w;j++){
                cout << A[i][j];
            }
            cout << "\n";
        }
    }
	return 0;
}
