#include <bits/stdc++.h>
using namespace std;

void showlist(list <char> g)
{
    list <char> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << *it;
    cout << '\n';
}

int main() {
    string line;
    list<char> texto;
    list<char>::iterator ptr;

    while(getline(cin,line)){

        ptr=texto.begin();
        for(int i=0;i<line.size();i++){

            if(line[i]=='['){
                ptr=texto.begin();
            }

            if(line[i]==']'){
                ptr=texto.end();
            }

            if(line[i]!='[' && line[i]!=']'){
                texto.insert(ptr,line[i]);
            }
        }

        showlist(texto);
        texto.list::clear();
    }
    return 0;
}