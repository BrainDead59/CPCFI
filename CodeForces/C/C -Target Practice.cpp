//Codeforces
//g++ -std=c++17 -o a b.cpp
//Default c++17

#include <bitset>  
#include <iostream> 
#include <string>  
#include <vector>  
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <algorithm> 
#include <sstream> 
#include <numeric> 
#include <list>
#include <stack>
#include <deque>
#include <queue>
#include <iomanip> 
#include <math.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef map<int,int> mii;

#define endl '\n'

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int contador=0;
        for(int j=0;j<10;j++){
            string row;
            cin >> row;
            if(j==0 || j==9){
                for(int k=0;k<row.length();k++){
                    if(row[k]=='x' || row[k]=='X'){
                        contador+=1;
                    }
                }
            }
            if(j==1 || j==8){
                for(int k=0;k<row.length();k++){
                    if(k==0 || k==9){
                        if(row[k]=='x' || row[k]=='X'){
                            contador+=1;
                        }
                    }else{
                        if(row[k]=='x' || row[k]=='X'){
                            contador+=2;
                        }
                    }
                }
            }
            if(j==2 || j==7){
                for(int k=0;k<row.length();k++){
                    if(k==0 || k==9){
                        if(row[k]=='x' || row[k]=='X'){
                            contador+=1;
                        }
                    }else if(k==1 || k==8){
                        if(row[k]=='x' || row[k]=='X'){
                            contador+=2;
                        }
                    }else{
                        if(row[k]=='x' || row[k]=='X'){
                            contador+=3;
                        }
                    }
                }
            }
            if(j==3 || j==6){
                for(int k=0;k<row.length();k++){
                    if(k==0 || k==9){
                        if(row[k]=='x' || row[k]=='X'){
                            contador+=1;
                        }
                    }else if(k==1 || k==8){
                        if(row[k]=='x' || row[k]=='X'){
                            contador+=2;
                        }
                    }else if(k==2 || k==7){
                        if(row[k]=='x' || row[k]=='X'){
                            contador+=3;
                        }
                    }else{
                        if(row[k]=='x' || row[k]=='X'){
                            contador+=4;
                        }
                    }
                }
            }
            if(j==4 || j==5){
                for(int k=0;k<row.length();k++){
                    if(k==0 || k==9){
                        if(row[k]=='x' || row[k]=='X'){
                            contador+=1;
                        }
                    }else if(k==1 || k==8){
                        if(row[k]=='x' || row[k]=='X'){
                            contador+=2;
                        }
                    }else if(k==2 || k==7){
                        if(row[k]=='x' || row[k]=='X'){
                            contador+=3;
                        }
                    }else if(k==3 || k==6){
                        if(row[k]=='x' || row[k]=='X'){
                            contador+=4;
                        }
                    }else{
                        if(row[k]=='x' || row[k]=='X'){
                            contador+=5;
                        }
                    }
                }
            }
        }
        cout << contador << endl;
    }
    return 0;
}