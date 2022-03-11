//IEEE
//g++ -std=c++17 -o a b.cpp

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef map<int,int> mii;


int main(){
    
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    string in;
    getline(cin,in);

    for(int i=0;i<in.size();i++){
        if(in[i]>=65  && in[i]<=90){
            in[i]=(in[i]-'A'+ 14)%26 +'A';
        }else if(in[i]>=97  && in[i]<=122){
            in[i]=(in[i]-'a'+ 14)%26 +'a';

        }
    }
    cout << in;
    
    return 0;
}
