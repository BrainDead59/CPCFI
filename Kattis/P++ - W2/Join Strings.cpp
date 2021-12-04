//Kattis ID: joinstrings
//

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,a,b,ans;
  string str;
  scanf("%d",&n);
  vector<string> s(n);
  getline(cin,str);
  for(int i=0;i<n;i++){
    getline(cin,str);
    s[i]=str;
  }

  for(int i=0;i<n-1;i++){
    scanf("%d %d",&a,&b);
    a--;
    b--;
    s[a]+=s[b];
    s[b]="";
    ans = a;
  }
  printf("%s",s[ans].c_str());

  return 0;
}