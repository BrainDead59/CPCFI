//Kattis ID: encodedmessage
//

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s,r="";
  scanf("%d",&n);
  getline(cin,s);
  for(int i=0;i<n;i++){
    getline(cin,s);
    int size = sqrt(s.length());
    vector<vector<char>> mss(size,vector<char>(size));

    int c=0;
    for(int j=0;j<size;j++){
      for (int k=0;k<size;k++){
        mss[j][k]=s[c];
        c++;
      }
    }

    for(int j=size-1;j>=0;j--){
      for(int k=0;k<size;k++){
        r+=mss[k][j];
      }
    }
    printf("%s\n",r.c_str());
    r="";
  }  

  return 0;
}