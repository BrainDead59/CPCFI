 #include <iostream> 
 #include <vector>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int main(){
    ios::sync_with_stdio(0);  
    cin.tie(0); 

    int t,l,r;
    cin >> t;
    for(int i=1;i<=t;i++){
        cin >> l >> r;
        if(l==0 || r==0){
            cout << "Case #" << i << ": " << 0 << "\n"; 
        }else{
            if(l>r) l=r;
            else r=l;
            
            int total = 0;
            for(int j=0;j<(l+r)/2;j++){
                total+=(l+r)/2-j;
            }
            cout << "Case #" << i << ": " << total << "\n";
        }
    }
	return 0;
}