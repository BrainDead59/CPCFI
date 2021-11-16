//Kattis ID: basketballoneonone

#include <bits/stdc++.h>
using namespace std;

int main(){
    string line;
    int A=0,B=0;
    cin >> line;
    for(int i=0;i<line.length();i++){
        if(line[i]=='A'){
            i++;
            A+=line[i] - '0';
        }

        if(line[i]=='B'){
            i++;
            B+=line[i] - '0';
        }
    }
    if(B>A){
        printf("B");
    }else{
        printf("A");
    }
    return 0;
}