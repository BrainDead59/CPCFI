//Kattis
//g++ -std=c++17 -o a b.cpp

#include <iostream> 
#include <string>  
#include <vector>  
#include <map>
#include <algorithm> 
#include <sstream> 
#include <numeric> 
#include <list>

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
    string val;
    cin >> t;
    cin.ignore();
    for(int i=0;i<t;i++){
        list<char> ml;
        list<char>::iterator it=ml.begin();
        getline(cin,val);
        for(int j=0;j<val.size();j++){
            if(val[j]=='<'){
                if(it!=ml.begin()){
                    it--;
                    it=ml.erase(it);
                }
            }else if(val[j]==']'){
                it=ml.end();
            }else if(val[j]=='['){
                it=ml.begin();
            }else{
                it=ml.insert(it,val[j]);
                it++;
            }
        }
        for(auto a:ml){
            cout << a;
        }
        cout << "\n";
    }
	return 0;
}
