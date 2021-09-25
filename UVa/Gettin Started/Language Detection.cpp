#include <bits/stdc++.h>
using namespace std;


int main() {
    string str;
    int contador=1;
    while(1){
        getline(cin,str);

        if(str.compare("#")==0){
            break;
        }

        if(str.compare("HELLO")==0){
            printf("Case %d: ENGLISH\n",contador);
        }else if(str.compare("HOLA")==0){
            printf("Case %d: SPANISH\n",contador);
        }else if(str.compare("HALLO")==0){
            printf("Case %d: GERMAN\n",contador);
        }else if(str.compare("BONJOUR")==0){
            printf("Case %d: FRENCH\n",contador);
        }else if(str.compare("CIAO")==0){
            printf("Case %d: ITALIAN\n",contador);
        }else if(str.compare("ZDRAVSTVUJTE")==0){
            printf("Case %d: RUSSIAN\n",contador);
        }else{
            printf("Case %d: UNKNOWN\n",contador);
        }
        contador++;
    }
    return 0;
}
