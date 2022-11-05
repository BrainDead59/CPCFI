//Kattis
 
#include <iostream> 
#include <string>  
#include <vector>  
#include <algorithm> 
#include <sstream> 
#include <stack>
#include <deque>
#include <map>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef map<int,int> mii;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int t;
    deque<string> a;
    cin >> t;
    for(int i=0;i<t;i++){
        string op,vls,elemento;
        int siz;
        a.clear();

        cin >> op;
        cin >> siz;
        cin >> vls;

        if(siz>0){
            vls=vls.substr(1,vls.size()-2);
            istringstream ss(vls);
            while(getline(ss, elemento,',')){ 
                a.push_back(elemento);
            }
        }

        bool bandera = true;
        bool reverse = false;
        for(int j=0;j<op.size();j++){
            if(op[j]=='R'){
                reverse=!reverse;
            }
            if(op[j]=='D'){
                if(a.size()==0){
                    cout << "error\n"; 
                    bandera=false;
                    break;
                }else{
                    if(reverse==true){
                        a.pop_back();
                    }else{
                        a.pop_front();
                    }
                }
            }
        }
        if(bandera){
            if(reverse){
                stack<string> val;
                while(!a.empty()){
                    val.push(a.front());
                    a.pop_front();
                }
                while(!val.empty()){
                    a.push_back(val.top());
                    val.pop();
                }
            }
            string sol="[";
            while (!a.empty()){
                sol+=a.front()+",";
                a.pop_front();
            }
            if(sol.size()>1) sol=sol.substr(0,sol.size()-1);
            sol+="]\n";
            cout << sol;
        }
    }
	return 0;
}
