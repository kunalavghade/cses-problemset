#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  long long  sum = n * (n+1LL) /2LL;

  if(sum & 1) {
    cout<<"NO"<<endl;
    return 0;
  }
  long long target = sum /2 ;
  vector<long long> s1, s2;
  for(long long i = n; i > 0; i--) 
    if(target >= i)
      s1.push_back(i), target-=i;
    else s2.push_back(i);

  cout<<"YES"<<endl;
  cout<<s1.size()<<endl;
  for(int x: s1) 
    cout<<x<< " ";
  cout<<endl;
  cout<<s2.size()<<endl;
  for(int x: s2) 
    cout<<x<< " ";

  return 0;

}
