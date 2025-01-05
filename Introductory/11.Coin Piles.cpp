#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    int a, b;
    cin>>a>>b;
    bool c1 = (a+b) % 3 == 0, c2 = a <= 2*b, c3 = b <= 2*a;
    if(c1 & c2 & c3) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}
