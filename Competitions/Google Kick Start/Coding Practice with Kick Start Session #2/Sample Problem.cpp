 #include <iostream> 
 #include <vector>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int main(){
    ios::sync_with_stdio(0);  
    cin.tie(0); 

    int t,n,m,c;
    vi cd;
    cin >> t;
    for(int i=1;i<=t;i++){
        cin >> n >> m;
        int sum=0;
        for(int j=0;j<n;j++){
            cin >> c;
            sum+=c;
        }
        cout << "Case #" << i << ": " << sum%m << "\n"; 
    }
	return 0;
}