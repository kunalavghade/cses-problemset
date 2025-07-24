#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(ll &ans, vector<ll> &v, ll s1, ll s2, ll i) {
  if( i < 0) {
    ans = min(ans, abs(s1-s2));
    return;
  }
  solve(ans, v, s1+v[i], s2, i-1);
  solve(ans, v, s1, s2+v[i], i-1);
}

int main(){
  ll n;
  cin>>n;
  vector<ll> v(n);
  for(ll i = 0; i < n; i++) cin>>v[i];

  ll ans = INT_MAX;
  solve(ans, v, 0, 0, v.size()-1);

  cout<<ans<<endl;

  return 0;
}
