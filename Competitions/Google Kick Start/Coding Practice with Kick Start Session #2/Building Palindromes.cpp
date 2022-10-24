 #include <iostream> 
 #include <vector>
 #include <unordered_map>
 #include <string>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int main(){
    ios::sync_with_stdio(0);  
    cin.tie(0); 
    
    int t,n,q,l,r;
    string pal,space;
    cin >> t;
    for(int i=1;i<=t;i++){
        cin >> n >> q;
        getline(cin,pal);
        getline(cin,pal);
        int contador = 0;
        for(int j=0;j<q;j++){
            cin >> l >> r;
            l--;
            r--;
            string spal=pal.substr(l,r-l+1);
            unordered_map <char, int> m;
            for(int k=0;k<spal.length();k++){
                m[spal[k]]++;
            }
            if(m.size()==1){
                contador++;
            }else if(m.size()>1){
                int impar = 0;
                for(auto& it: m){
                    if(it.second%2==1)
                    impar++;
                }
                if(impar==1 || impar==0){
                    contador++;
                }
            }
        }
        cout << "Case #" << i << ": " << contador << "\n";
    }
	return 0;
}