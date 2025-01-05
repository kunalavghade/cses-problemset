#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin>>s;
  vector<int> mp(26,0);
  int n = s.size();
  for(auto x: s)
    mp[x-'A'] += 1;


  int ok = 1;
  for(int i = 0; i < 26; i++)
    if(mp[i]&1) {
      if(ok) ok = !ok;
      else {
        cout<<"NO SOLUTION"<<endl;
        return 0;
      }
    }

  for(int i = 0, j = 0; i < 26; i++) {
    if(mp[i]&1) s[(int)(n/2) ] = 'A' + i , mp[i]--;
    while(mp[i]>0) {
      s[j] = s[n-j-1] = 'A' +i, mp[i] -=2, j++;
    }
  }
  
  cout<<s<<endl;
  return 0;
}
