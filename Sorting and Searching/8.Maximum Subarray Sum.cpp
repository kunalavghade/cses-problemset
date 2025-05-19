#include <bits/stdc++.h>
using namespace std;
 
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
long long int solve(vector<long long int> v, int n) {
  long long int ans = INT_MIN, mx =INT_MIN;
  for(int i= 0; i < n; i++) {
    mx = max(v[i], mx+v[i]);
    ans = max(ans, mx);
  }
  return ans;
}
 
int main() {
    fastIO();  
    int n;
    cin>>n;
    vector<long long int> v(n);
    for(int i = 0; i < n; i++) 
      cin>>v[i];
    long long int ans = solve(v, n);
    cout<<ans;
    return 0;

