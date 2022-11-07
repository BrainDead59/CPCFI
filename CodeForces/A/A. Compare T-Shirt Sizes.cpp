//Codeforces

#include <bitset>  
#include <iostream> 
#include <string>  
#include <vector>  
#include <unordered_map>
#include <map>
#include <algorithm> 
#include <set>
#include <sstream> 

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pi;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        string a,b;
        cin >> a >> b;
        if(a[a.size()-1]=='L'){
            if(b[b.size()-1]=='L'){
                if(a.size()==b.size()){
                    cout << "=" << "\n";
                }
                else if(a.size()<b.size()){
                    cout << "<" << "\n";
                }
                else if(a.size()>b.size()){
                    cout << ">" << "\n";
                }
            }
            else if(b[b.size()-1]=='M'){
                cout << ">" << "\n"; 
            }
            else if(b[b.size()-1]=='S'){
                cout << ">" << "\n"; 
            }
        }
        else if(a[a.size()-1]=='S'){
            if(b[b.size()-1]=='S'){
                if(a.size()==b.size()){
                    cout << "=" << "\n";
                }
                else if(a.size()<b.size()){
                    cout << ">" << "\n";
                }
                else if(a.size()>b.size()){
                    cout << "<" << "\n";
                }
            }
            else if(b[b.size()-1]=='M'){
                cout << "<" << "\n"; 
            }
            else if(b[b.size()-1]=='L'){
                cout << "<" << "\n"; 
            }
        }
        else if(a[a.size()-1]=='M'){
            if(b[b.size()-1]=='M'){
                cout << "=" << "\n";
            }
            else if(b[b.size()-1]=='L'){
                cout << "<" << "\n"; 
            }
            else if(b[b.size()-1]=='S'){
                cout << ">" << "\n"; 
            }
        }
    }

    
	return 0;
}
