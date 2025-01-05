#include<bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin>>n;
  
  while(n--) {
    long long x, y;
    cin>>y>>x;
    
    long long mx = max(x, y);
    long long sq = (mx-1) * (mx-1);

    if(mx&1) {
      if(x > y)
        cout<<(mx * mx) - y + 1<<endl;
      else 
        cout<< sq + x <<endl; 
    }
    else {
      if(x > y) 
        cout<<sq + y<<endl;
      else 
        cout<< (mx *mx) - x +1 <<endl;
    }
  }
  
  return 0;
}
