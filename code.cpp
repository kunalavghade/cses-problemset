/*

    Author: kunalavghade
    Date: 19-04-2026
    
*/
#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    for(int i = 0; i<n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), [](pair<int,int> x, pair<int,int> y) {
        return x.second < y.second;
    });
    int ans = 0, cur = 0;
    for(auto x: a) {
        if(x.first >= cur) {
            ans++;
            cur = x.second;
        }
    }
    cout<< ans << endl;
   
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}