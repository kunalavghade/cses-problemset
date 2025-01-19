#include<bits/stdc++.h>
using namespace std;

int main() {  
  
  int n, m, t;
  cin>>n>> m;
  multiset<int> st;
  while(n--) {
    cin>>t;
    st.insert(t);
  }

  while(m--) {
    cin>>t;
    auto x = st.upper_bound(t);
    if(x == st.begin()) cout<<-1<<endl;
    else {
      cout<<(*--x)<< " ";
      st.erase(x);
    }
  }
  cout<<endl;
  return 0;
}
