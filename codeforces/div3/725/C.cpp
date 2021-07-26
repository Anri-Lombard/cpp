#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair <int, int>;
using cd = complex<ld>;

void solve() {
    int n, l ,r;
    cin >> n >> l >> r;
    vector<int> v(n);
    for (int &e : v) {
        cin >> e;
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    for (int i=0; i<n; i++) {

        // c++ functions for binary search

        ans += upper_bound(v.begin(), v.end(), r - v[i]) - v.begin(); // returns pointer of highest
        ans -= lower_bound(v.begin(), v.end(), l - v[i]) - v.begin(); // returns pointer of lowest
        if (l <= 2 * v[i] && 2 * v[i] <= r) {
            ans--;
        }
    }
    cout << ans / 2 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}