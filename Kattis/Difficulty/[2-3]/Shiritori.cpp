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
    unordered_set<string> a;
    unordered_set<string>::const_iterator it;
    char last=' ';
    for(int i=0;i<n;i++){
        string pal;
        cin >> pal;
        if(i==0){
            last = pal[pal.size()-1];
            it=a.find(pal);
            if(it==a.end()){
                a.insert(pal);
            }else{
                if(i%2==0){
                    cout << "Player 1 lost";
                    return 0;
                }else{
                    cout << "Player 2 lost";
                    return 0;
                }
            }
        }else{
            if(last==pal[0]){
                last = pal[pal.size()-1];
                it=a.find(pal);
                if(it==a.end()){
                    a.insert(pal);
                }else{
                    if(i%2==0){
                        cout << "Player 1 lost";
                        return 0;
                    }else{
                        cout << "Player 2 lost";
                        return 0;
                    }
                }
            }else{
                if(i%2==0){
                    cout << "Player 1 lost";
                    return 0;
                }else{
                    cout << "Player 2 lost";
                    return 0;
                }
            }
        }
    }
    cout << "Fair Game";
    return 0;
}
