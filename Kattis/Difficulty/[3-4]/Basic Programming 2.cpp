//Kattis

#include <iostream> 
#include <string>  
#include <vector>  
#include <unordered_map>
#include <map>
#include <set>
#include <algorithm> 

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef pair<int,int> pi;

void funcionA(int n, vector<int> A){
    map<int,int> mymap;
    bool bandera=false;
    int target=7777;
    for(int i=0;i<n;i++){
        int valor=target-A[i];
        if(mymap.find(valor) != mymap.end()){
            bandera=true;
            break;
        }else{
            mymap[A[i]]=i;
        }
    }
    if(bandera){
        cout << "Yes";
    }else{
        cout << "No";
    }
}

void funcionB(int n, vector<int> A){
    map<int,int> mymap;
    bool bandera=false;
    for(int i=0;i<n;i++){
        mymap[A[i]]++;
        if(mymap[A[i]]>1){
            bandera=true;
            break;
        }
    }
    if(bandera){
        cout<< "Contains duplicate";
    }else{
        cout << "Unique";
    }
}

void funcionC(int n, vector<int> A){
    map<int,int> mymap;
    int valor=(n/2);
    for(int i=0;i<n;i++){
        mymap[A[i]]+=1;
    }
    int result;
    for(auto z:mymap){
        if(z.second>valor){
            result=z.first;
            break;
        }else{
            result=-1;
        }
    }
    cout << result;
}

void funcionE(int n, vector<int> A){
    vi B;
    for(int i=0;i<n;i++){
        if(A[i]>99 && A[i]<1000){
            B.push_back(A[i]);
        }
    }
    sort(B.begin(),B.end());
    for(auto z:B){
        cout << z << " ";
    }
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int n,t;
    cin >> n >> t;
    vi A(n,0);
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    switch (t){
    case 1:
        funcionA(n, A);
        break;

    case 2:
        funcionB(n, A);
        break;
    
    case 3:
        funcionC(n, A);
        break;
    
    case 4:
        sort(A.begin(),A.end());
        if(n%2){
            cout << A[n/2];
        }else{
            cout << A[(n/2)-1] << " " << A[n/2]; 
        }
        break;
    
    case 5:
        funcionE(n, A);
        break;

    default:
        break;
    }
    
	return 0;
}
