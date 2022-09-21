//Kattis: Mastering Mastermind

#include <iostream> 
#include <string>  
#include <vector>  

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    string a,b;
    cin >> n >> a >> b;
    int r=0,s=0;
    for(int i=0;i<n;i++){
        if(a[i]==b[i]){ 
            r++;
            a[i]=' ';
            b[i]=' ';
        }
    }
    for(int i=0;i<a.size();i++){
        if(a[i]!=' '){
            size_t found = b.find(a[i]);
            if (found!=string::npos){
                s++;
                a[i]=' ';
                b[found]=' ';
            }
        }
    }
    cout << r << " " << s;
	return 0;
}