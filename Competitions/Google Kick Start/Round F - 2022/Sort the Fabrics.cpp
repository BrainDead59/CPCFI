//Google Kickstart Round F: Sort the Fabrics 

#include <iostream> 
#include <string>  
#include <vector>  
#include <algorithm>
#include <map>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        vector<int> vecU;
        vector<string> vecC;
        vector<int> vecD;
        map<pair<string,int>,int> mymap;
        for(int j=0;j<n;j++){
            string str;
            int u,d;
            cin >> str >> d >> u;
            vecC.push_back(str);
            vecD.push_back(d);
            vecU.push_back(u);
            mymap[{str,u}]=u;
        }
        vector<string> vecC2 = vecC;
        vector<int> vecD2 = vecD;
        sort(vecC.begin(),vecC.end());
        sort(vecD.begin(),vecD.end());
        int contador=0;
        for(int j=0;j<n;j++){
            if(vecD[j]==vecD2[j]){
                if(vecC[j]==vecC2[j]){
                    if(mymap[{vecC[j],vecD[j]}]==mymap[{vecC2[j],vecD2[j]}]){
                        contador++;
                    }
                }
            }
        }
        cout << "Case #" << i+1 << ": " << contador << "\n";
    }
	return 0;
}