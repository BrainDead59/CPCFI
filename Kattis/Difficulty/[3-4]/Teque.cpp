//Kattis
//g++ -std=c++17 -o a b.cpp

#include <bitset>  
#include <iostream> 
#include <string>  
#include <vector>  
#include <map>
#include <unordered_map>
#include <algorithm> 
#include <sstream> 
#include <numeric> 
#include <list>
#include <stack>
#include <deque>
#include <queue>

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
    cin >> t;
    deque<int> a,b;
    for(int i=0;i<t;i++){
        string op;
        int val;
        cin >> op >> val;
        if(op=="push_back"){
            b.push_back(val);
            while(b.size() > a.size()){
                a.push_back(b.front());
                b.pop_front();
            }   
        }else if(op=="push_front"){
            a.push_front(val);
            while(a.size() > b.size() + 1){
                b.push_front(a.back());
                a.pop_back();
            }
        }else if(op=="push_middle"){
            a.push_back(val);
            while(a.size() > b.size() + 1){
                b.push_front(a.back());
                a.pop_back();
            }
        }else if(op=="get"){
            if(val+1<=a.size()){
                cout << a[val] << "\n";
            }else{
                val-=a.size();
                cout << b[val] << "\n";
            }
        }
    }
	return 0;
}
