#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;


int main() {
    stack<int> s1;
    stack<int> s2;
    int n,opcion,valor;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> opcion;
        if(opcion==1){
            cin >> valor;
            s1.push(valor);
        }
        if(opcion==2){
            if(!s2.empty()){
                s2.pop();
                continue;
            }
            while (!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            s2.pop();
        }
        if(opcion==3){
            if(!s2.empty()){
                cout << s2.top() << "\n";
                continue;
            }
            while (!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            cout << s2.top() << "\n";
        }
    }
    return 0;
}
