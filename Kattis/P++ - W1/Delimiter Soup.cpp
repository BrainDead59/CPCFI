//Kattis ID: elimitersoup
//PU++ Semana 1

#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    int n,a=0;
    string s;
    stack<char> p;
    scanf("%d",&n);
    getline(cin, s);
    getline(cin, s);
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            p.push(s[i]);
        }else if(s[i]==')' || s[i]=='}' || s[i]==']'){
            if(s[i]==')'){
                if(p.empty() || p.top() != '('){
                    printf("%c %d",s[i],i);
                    a=1;
                    break;
                }
                p.pop();
            }   
            if(s[i]=='}' || s[i]==']'){
                if(s[i]=='}'){
                    if(p.empty() || p.top() != '{'){
                        printf("%c %d",s[i],i);
                        a=1;
                        break;
                    }
                    p.pop();
                }
                if(s[i]==']'){
                    if(p.empty() || p.top() != '['){
                        printf("%c %d",s[i],i);
                        a=1;
                        break;
                    }
                    p.pop();
                }
            }
        }
    }
    if(!a){
        printf("ok so far");
    }

    return 0;
}