//Facebook Hacker Cup: Second Hands

#include <bitset>  
#include <iostream> 
#include <string>  
#include <vector>  
#include <unordered_map>
#include <map>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    int t,k,n,s;
    bool cum=true;
    cin >> t;
    for(int j=1;j<=t;j++){
        cin >> n >> k;
        map<int,int> A;
        
        for(int i=0;i<n;i++){
            cin >> s;
            A[s]+=1;
            if(A[s]>2){
                cum=false;
            }
        }

        A.clear();
        if(n>k*2){
            cout << "Case #" << j << ": NO" << "\n";
        }else{
            if(cum){
                cout << "Case #" << j << ": YES" << "\n";
            }else{
                cout << "Case #" << j << ": NO" << "\n";
            }
        }
        cum=true;
    }
	return 0;
}