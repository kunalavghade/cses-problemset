#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin>>s;
  vector<string> v; 
  sort(begin(s),end(s));
  do{
    v.push_back(s);
  }while(next_permutation(begin(s),end(s)));
  
  cout<<v.size()<<endl;
  for(auto x: v)
    cout<<x<<endl;

  return 0;
}
