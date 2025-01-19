#include<bits/stdc++.h>
using namespace std;

int main() {  
  int n, m, k, t;
  cin>>n>>m>>k;
  priority_queue<int, vector<int>, greater<int>> cand, app;
  while(n--)  {
    cin>>t;
    cand.push(t);
  }
  while(m--)  {
    cin>>t;
    app.push(t);
  } 
  
  int ans = 0;
  while(cand.size()>0) {
    while(app.size() > 0  and app.top()+k<cand.top())
      app.pop();
 //   cout<<app.top()<< " "<<cand.top()<<endl;  
    if(app.size()> 0 and app.top()-k <= cand.top()  and app.top()+k>=cand.top())
      ans++, app.pop();
    cand.pop();
  }
  cout<<ans<<endl;
  return 0;
}
