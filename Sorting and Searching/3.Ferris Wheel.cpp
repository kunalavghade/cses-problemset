#include<bits/stdc++.h>
using namespace std;

int main() {  
  int n, x, i = 0, j, ans = 0;
  cin>>n>>x;
  vector<int> pi(n);
  j = n-1;
  while(n--)
    cin>>pi[n];

  sort(begin(pi),end(pi));
  while(i <= j){
    if(pi[i]+pi[j]<=x)
      i++;
    j--, ans++;
  }

  cout<<ans<<endl;
  return 0;
}
