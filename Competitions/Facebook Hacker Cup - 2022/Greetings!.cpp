//Facebook Hacker Cup: Problem A1-A2: Consecutive Cuts

#include <bitset>  
#include <iostream> 
#include <string>  
#include <vector>  

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t,n,k,aux;
    cin >> t;
    for(int i=1;i<=t;i++){
        cin >> n >> k;
        vi a1;
        vi a2;
        bool bandera=false;
        for(int j=0;j<n;j++){
            cin >> aux;
            a1.push_back(aux);
        }
        for(int j=0;j<n;j++){
            cin >> aux;
            a2.push_back(aux);
        }

        int verifica=0;
        for(int j=0;j<n;j++){
            if(a1[j]==a2[j]){
                verifica++;
            }
        }
        if(verifica==n){
            bandera=true;
        }else{
            vi a3=a1;
            verifica=0;
            int cuenta=1;
            while(cuenta<n){
                int subcuenta=0;
                while(subcuenta<k){
                    for(int z=0;z<cuenta;z++){
                        a1.push_back(a1.front());
                        a1.erase(a1.begin());
                        
                        for(int q=0;q<n;q++){
                            if(a1[q]==a2[q]){
                                verifica++;
                            }
                        }
                        if(verifica==n){
                            bandera=true;
                            verifica=0;
                            subcuenta=k;
                            cuenta=n;
                            break;
                        }else{
                            verifica=0;
                        }
                    }
                    subcuenta++;
                }
                cuenta++;
                a1=a3;
            }
        }
        if(bandera){
            cout << "Case #" << i << ":" << " YES\n";
        }else{
            cout << "Case #" << i << ":" << " NO\n";
        }
    }
	return 0;
}