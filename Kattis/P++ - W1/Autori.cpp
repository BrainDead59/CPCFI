//Kattis ID: autori
//PU++ Semana 1

#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    string s,r="";
    cin >> s;
    for(int i=0;i<s.length();i++){
        if(i==0){
            r+=s[i];
        }
        if(s[i]=='-'){
            r+=s[i+1];
        }
    }
    cout << r;

    return 0;   
}