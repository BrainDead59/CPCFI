//Kattis: Flag Quiz
#include <iostream> 
#include <string> 
#include <vector>   

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int n;
    string s,aux="";
    getline(cin,s);
    cin >> n;
    getline(cin,s); //Salto de línea
    vector<vector<string>> arr;
    vector<string> origin;
    for(int i=0;i<n;i++){
        vector<string> divisiones;
        getline(cin,s);
        origin.push_back(s);
        s+=',';
        for(auto z: s){
            if(z==','){
                divisiones.push_back(aux);
                aux="";
            }else{
                aux+=z;
            }
        }
        arr.push_back(divisiones);
    }
    
    vi cambiosStr(n,0);
    int tam=arr[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int cambios=0;
            for(int k=0;k<tam;k++){
                if(arr[i][k]!=arr[j][k]){
                    cambios++;
                }
            }
            cambiosStr[i]=max(cambiosStr[i],cambios);
        }
    }
    
    int limiteCamb=101;
    for(int i=0;i<n;i++){
        limiteCamb=min(cambiosStr[i],limiteCamb);
    }

    for(int i=0;i<n;i++){
        if(limiteCamb==cambiosStr[i]){
            cout<< origin[i] <<"\n";
        }
    }
    return 0;
}