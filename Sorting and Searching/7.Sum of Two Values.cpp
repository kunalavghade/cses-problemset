#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

vector<int> solve(int n, long long t, vector<long long>& v) {
    unordered_map<long long, int> mp;
    for (int i = 0; i < n; i++) {
      long long int diff =  t - v[i];
      if(diff > 0) {
        if (mp.count(diff)) 
            return {mp[diff], i + 1};  
        mp[v[i]] = i + 1;
      }
    }
    return {};
}

int main() {
    fastIO();  
    int n;
    long long t;
    cin >> n >> t;
    vector<long long> v(n);

    for (int i = 0; i < n; i++) 
        cin >> v[i];

    vector<int> ans = solve(n, t, v);
    if (ans.size() == 2)
        cout << ans[0] << " " << ans[1] << endl;
    else
        cout << "IMPOSSIBLE\n";

    return 0;
}

