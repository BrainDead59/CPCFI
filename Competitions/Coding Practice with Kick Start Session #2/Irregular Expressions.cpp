#include <iostream> 
#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int main(){
    //ios::sync_with_stdio(0);  
    //cin.tie(0); 

    int t, lo=1;
    string pal,blan;
    scanf("%d",&t);
    getline(cin,pal);
    while(t){
        getline(cin,pal);
        int contador = 0,it = 0;
        while(contador<2){
            if(pal[it]=='a'||pal[it]=='e'||pal[it]=='i'||pal[it]=='o'||pal[it]=='u') contador++;
            it++;
        }

        string restante = pal.substr(it,pal.length()-1);
        string primera = pal.substr(0,it);
        if(restante.find(primera)){ //Encontrar la segunda cadena igual, pendiente de resolver
            string segunda = restante.substr(0,restante.length()-primera.length());
            
            int contadorS=0,it2=0;
            while(contadorS<1){
                if(segunda[it2]=='a'||segunda[it2]=='e'||segunda[it2]=='i'||segunda[it2]=='o'||segunda[it2]=='u') contadorS++;
                it2++;
            }
            if(contadorS>0){
                cout << "Case #" << lo << ": " << "Spell!" << "\n";
            }else{
                cout << "Case #" << lo << ": " << "Nothing." << "\n";
            }
        }
        t--;
        lo++;
    }
	return 0;
}