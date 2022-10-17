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

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pi;
typedef map<int,int> mi;

void calcu(string a, string b){
    int total=0;
    int aca=0;
    for(int i=a.size()-1;i>=0;i--){
        if(i==a.size()-1){
            if(((a[i]-'0')+(b[i]-'0'))>9){
                aca++;
                total++;
            }
        }else{
            if(aca==1){
                if(((a[i]-'0')+(b[i]-'0')+aca)>9){
                    aca=1;
                    total++;
                }else{
                    aca--;
                }
            }else{
                if(((a[i]-'0')+(b[i]-'0'))>9){
                    aca++;
                    total++;
                }
            }
        }
    }
    if(total==0){
        cout << "No carry operation.\n";
    }else if(total==1){
        cout << total << " carry operation.\n";
    }else if(total>1){
        cout << total << " carry operations.\n";
    }
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    string a,b;
    while(cin >> a >> b){
        if(a=="0" && b=="0"){
            break;
        }
        if(a.size()>b.size()){
            string emp="";
            while(emp.size()<a.size()-b.size()){
                emp+="0";
            }
            emp+=b;
            b=emp;
            int total=0;
            int aca=0;
            calcu(a,b);
        }else if(a.size()<b.size()){
            string emp="";
            while(emp.size()<b.size()-a.size()){
                emp+="0";
            }
            emp+=a;
            a=emp;
            calcu(a,b);
        }else if(a.size()==b.size()){
            calcu(a,b);
        }
    }
	return 0;
}
