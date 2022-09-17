//Kattis: Divide by 100...

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
    
    string a,b;
    cin >> a;
    cin >> b;
    if(a.size()>=b.size()){
        int lim=a.size()-(b.size()-1),contador=0;
        string aux1 = a.substr(0,lim);
        string aux2 = a.substr(lim,a.size());
        for(int i=1;i<=(b.size()-1);i++){
            if(aux2[aux2.size()-i]=='0'){
                contador++;
            }else{
                break;
            }
        }
        if(contador==0){
            cout << aux1 + "." + aux2.substr(0,aux2.size());
        }
        if(contador > 0 ){
            if(contador == aux2.size()){
                cout << aux1;
            }else{
                cout << aux1 + "." + aux2.substr(0,aux2.size()-contador);
            }
        }
    }else{
        cout << "0.";
        for(int i=0;i<b.size()-a.size()-1;i++){
            cout <<"0";
        }
        cout << a;
    }
	return 0;
}