#include <bits/stdc++.h>
#include "random"

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using cd = complex<ld>;

void solve() {
    int N; cin >> N;

    vector<int> A(N);

    for (auto &a: A) 
        cin >> a;

    int small = int(find(A.begin(), A.end(), 1) - A.begin());
    int big = int(find(A.begin(), A.end(), N) - A.begin());

    if (small > big) 
        swap(small, big);

    cout << min({big + 1, small + 1 + N - big, N - small}) << "\n";
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
