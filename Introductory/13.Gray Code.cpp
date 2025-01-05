#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int nn =  2<<(n-1);
  for(int i = 0; i < nn; i++) {
    int code = i ^ (i>>1);
    for(int j = n-1; j >=0; j--)
      cout<<!!(code&(1<<j));
    cout<<endl;
    
  }
  return 0;
}
