#include<bits/stdc++.h>
using namespace std;

/* formula
 * ans = n/5 + n/25 + n/125 ..
*/
int main() {
  int n, ans =0;
  cin>>n;
  for(int i = 5; i <= n; i *= 5)
    ans +=  (n / i);
  cout<<ans<<endl;
  return 0;
}
