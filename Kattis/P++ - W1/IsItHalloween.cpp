//ID: isithalloween
//PU++ Semana 1

#include <bits/stdc++.h>
using namespace std;

int main(){
    //cin.tie(0);
    string s;
    getline(cin,s);
    if(s.compare("OCT 31")==0){
        printf("yup");
    }else if(s.compare("DEC 25")==0){
        printf("yup");
    }else{
        printf("nope");
    }

    return 0;   
}