#include <bits/stdc++.h>
using namespace std;
 
void fastIO() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
}
 
long long int solve(vector<long long int> v, int n) {
  sort(begin(v),end(v));
  long long int sum = 1;
  for(int x: v) {
    if(x>sum) return sum;
    sum += x;
  }
  return sum;
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
}
