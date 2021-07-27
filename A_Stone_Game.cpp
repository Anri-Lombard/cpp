#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;

void solve() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (auto &a: A)
        cin >> a;

    int small = int(find(A.begin(), A.end(), 1) - A.begin());
    int big = int(find(A.begin(), A.end(), N) - A.begin());

    if (small < big)
        swap(small, big);

    cout << min({big + 1, small + 1 + N - big, N -small}) << "\n";
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}