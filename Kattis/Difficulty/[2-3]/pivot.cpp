//Kattis: pivot

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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vi a(n);
    vi mx(n);
    vi mn(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(a[i]>=max){
            max=a[i];
            mx[i]=max;
        }else{
            mx[i]=max;
        }
    }
    
    int min=1000000;
    for(int i=n-1;i>=0;i--){
        if(a[i]<=min){
            min=a[i];
            mn[i]=min;
        }else{
            mn[i]=min;
        }
    }
    
    int contador=0;
    for(int i=0;i<n;i++){
        if(a[i]>=mx[i] && a[i]<=mn[i]){
          contador++;
        }
    }
    cout << contador;
    return 0;
}
    