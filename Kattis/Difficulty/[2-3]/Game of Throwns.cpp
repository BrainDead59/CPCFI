//Kattis

#include <bitset>  
#include <iostream> 
#include <string>  
#include <vector>  
#include <unordered_map>
#include <map>
#include <algorithm> 
#include <set>
#include <sstream> 
#include <stack>

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

    int n,k;
    string in;
    stack<int> pos;
    pos.push(0);
    cin >> n >> k;
    for(int i=0;i<k;i++){
        cin >> in;
        if(in=="undo"){
            int t;
            cin >> t;
            for(int j=0;j<t;j++){
                pos.pop();
            }
        }else{
            int val=stol(in);
            pos.push((val+pos.top())%n);
        }
    }
    int sol=pos.top();
    if(sol<0) sol+=n;
    cout << sol;
	return 0;
}
