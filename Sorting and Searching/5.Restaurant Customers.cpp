#include<bits/stdc++.h>
using namespace std;

int main() {  
  int n, t;
  cin>>n;
  vector<int> s(n), e(n);
  
  while(n--) 
    cin>>s[n]>>e[n];
  
  sort(begin(s),end(s));
  sort(begin(e),end(e));

  int i = 0, j = 0, cnt = 0, ans =0;
  while (i < s.size() and j < e.size()) {
    if(s[i]<e[j])
      cnt++, i++, ans = max(ans, cnt);
    else  
      j++, cnt--;
  }

  cout<<ans<<endl;

  return 0;
}
