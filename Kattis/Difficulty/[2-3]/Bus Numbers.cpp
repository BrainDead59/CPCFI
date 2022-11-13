//Kattis
//g++ -std=c++17 -o a b.cpp

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

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin >> n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int i=0;
    while(i<a.size()){
        if(a[i]+2==a[i+2]){
            int j=i+2;
            while(a[j+1]==a[j]+1){
                j++;
            }
            cout << a[i] << "-" << a[j] << " ";
            i=j+1;
        }else{
            cout << a[i] << " ";
            i++;
        }
    }
    return 0;
}
