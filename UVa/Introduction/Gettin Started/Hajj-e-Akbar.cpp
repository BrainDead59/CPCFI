#include <bits/stdc++.h>
using namespace std;


int main() {
    string str;
    int contador=1;

    while(1){
        //cin >> str;
        getline(cin,str);

        if(str.compare("*")==0){
            break;
        }

        if(str.compare("Hajj")==0){
            printf("Case %d: Hajj-e-Akbar\n",contador);
        }
        if(str.compare("Umrah")==0){
            printf("Case %d: Hajj-e-Asghar\n",contador);
        }

        contador++;
    }
    return 0;
}
