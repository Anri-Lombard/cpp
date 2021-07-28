#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef long double ld;
typedef vector<int> vi;


void solve() {
    int X, Y, K, N, P, C; cin >> X >> Y >> K >> N;
    bool verdict = false;

    while (N--) {
        cin >> P >> C;

        if (C <= K && (Y + P) >= X)
            verdict = true;
    }
    if (verdict)
        cout << "LuckyChef" << '\n';
    else
        cout << "UnluckyChef" << '\n';
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