#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() {
  lli n, c;
  lli sum =0;
  cin>>n;
  for(int i = 1; i< n; i++) {
    cin>>c;
    sum += c;
  }
  lli act = (n * (n+1)) /2;
  cout<<(act - sum)<<endl;
  return 0;
}
