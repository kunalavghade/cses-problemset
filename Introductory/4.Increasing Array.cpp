#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  ll n, pre = 0, c, ans = 0;;
  cin>>n;
  for(int i = 0; i < n; i++) {
    cin>>c;
    ans += max(pre-c, 0LL);
    pre = max(c, pre);
  }
  cout<<ans<<endl;
  return  0;
}
