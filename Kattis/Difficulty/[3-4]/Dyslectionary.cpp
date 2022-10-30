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
typedef vector<string> vs;
typedef pair<int,int> pi;


int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    
    string in;
    vs A;
    while(getline(cin,in)){
        if(in==""){
            int espacios=0;
            for(auto &a:A){
                if(a.size()>espacios) espacios=a.size();
                reverse(a.begin(),a.end());
            }
            sort(A.begin(),A.end());
            for(auto &a:A){
                reverse(a.begin(),a.end());
                string espacio="";
                while(espacio.size()<espacios-a.size()){
                    espacio+=" ";
                }
                espacio+=a;
                swap(espacio,a);
            }
            for(auto a: A){
                cout << a << "\n";
            }
            cout << "\n";
            A.clear();
        }else{
            A.push_back(in);
        }
    }
    int espacios=0;
    for(auto &a:A){
        if(a.size()>espacios) espacios=a.size();
        reverse(a.begin(),a.end());
    }
    sort(A.begin(),A.end());
    for(auto &a:A){
        reverse(a.begin(),a.end());
        string espacio="";
        while(espacio.size()<espacios-a.size()){
            espacio+=" ";
        }
        espacio+=a;
        swap(espacio,a);
    }
    for(auto a: A){
        cout << a << "\n";
    }
    A.clear();
	return 0;
}
