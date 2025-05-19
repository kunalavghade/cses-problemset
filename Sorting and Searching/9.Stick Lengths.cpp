#include <bits/stdc++.h>
using namespace std;


void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}



long long int solve(vector<int> v, int n ) {
  sort(begin(v),end(v));
  int m = v[n/2];
  long long int ans = 0;
  for(int x: v)
    ans +=  abs(x-m);
  return ans;
}

int main() {
    fastIO();  
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) 
      cin>>v[i];
    long long int ans = solve(v, n);
    cout<<ans;
    return 0;
}

