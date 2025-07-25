#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool col[16], diag1[16], diag2[16], reserved[8][8];
int  ways;


void search(int r) {
  if(r == 8){
    ways++;
    return;
  }

  for(int c = 0; c < 8; c++){
    if(col[c] || diag1[r+c] || diag2[r-c+7] || reserved[r][c])
      continue;
    
    col[c] = diag1[r+c] = diag2[r-c+7] = 1;
    
    search(r+1);

    col[c] = diag1[r+c] = diag2[r-c+7] = 0;
  }
}

int main(){

  for(int i = 0; i < 16; i++) {
    col[i] = diag1[i] = diag2[i] = 0;
  }

  string x;
  for(int i = 0; i < 8; i++) {
    cin>>x;
    for(int j = 0; j < 8; j++)
      reserved[i][j] = x[j] != '.';
  }
      

  search(0);

  cout<<ways<<endl;

  return 0;
}
