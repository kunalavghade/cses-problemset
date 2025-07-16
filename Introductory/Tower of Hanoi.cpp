#include<bits/stdc++.h>
using namespace std; 


void move_d(int n, vector<vector<int>> &ans, int s, int d, int a) {
  if(n == 1)  {
    ans.push_back({s, d});
    return;
  }

  move_d(n-1, ans, s, a, d);

  ans.push_back({s, d});

  move_d(n-1, ans, a, d, s);
}

void solve(int n){
  vector<vector<int>> ans;
  int s = 1, a =2, d = 3;
  move_d(n, ans,s, d, a);
  cout<<ans.size()<<endl;
  for(auto x: ans)
    cout<<x[0]<< " "<<x[1]<<endl;
}


int main(){
  int n;
  cin>>n;
  solve(n);
  return 0;
}
