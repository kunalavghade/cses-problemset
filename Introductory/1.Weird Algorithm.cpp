#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(ll x) {
  cout<<x<<endl;
  if(x == 1) return;
  if(x&1) solve(x*3+1);
  else solve(x/2);
}

int main(){
  ll n;
  cin>>n;
  solve(n);
  return 0;
}
