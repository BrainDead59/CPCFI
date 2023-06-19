//Codeforces: A. Insert Digit
//g++ -std=c++17 -o a b.cpp
//Default c++14


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

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int t,n;
    string val,d,sub;
    cin >> t;
    for(int j=0;j<t;j++){
        cin >> n >> d;
        cin >> val;
        int i=0;
        while(val[i] >= d[0]){
            i++;
        }
        sub = val.substr(0,i);
        sub += d[0]; 
        sub += val.substr(i,n-i);
        cout << sub << "\n";
        sub = ' ';
    }
    return 0;
}
