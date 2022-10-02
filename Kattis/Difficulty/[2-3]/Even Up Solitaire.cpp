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
typedef pair<int,int> pi;
typedef map<int,int> mi;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int n;
    cin >> n;
    vi B(n);
    for(int i=0;i<n;i++){
        cin >> B[i];
    }
    stack<int> A;
    for(int i=0;i<n;i++){
        if(A.size()>0){
            int val=A.top();
            if((B[i]+val)%2==0){
                A.pop();
            }else{
                A.push(B[i]);
            }
        }else{
            A.push(B[i]);
        }
    }
    cout << A.size();
    
	return 0;
}
