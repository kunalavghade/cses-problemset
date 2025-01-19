#include <bits/stdc++.h>
using namespace std;

int main(){
  set<int> st;
  int n, t;
  cin>>n;
  while(n--) {
    cin>>t;
    st.insert(t);
  }
  cout<<st.size()<<endl;
  return 0;
}
