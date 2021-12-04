//Kattis ID: skener
//

#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, c, zr, zc;
  string s;
  scanf("%d %d %d %d",&r,&c,&zr,&zc);
  vector<vector<char>> grid(r,vector<char>(c));
  getline(cin,s);
  
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%c",&grid[i][j]);
    }
    getline(cin,s);
  }
  
  for(int i=0;i<r*zr;i++){
    for(int j=0;j<c*zc;j++){
      printf("%c",grid[i/zr][j/zc]);
    }
    printf("\n");
  }

  return 0;
}