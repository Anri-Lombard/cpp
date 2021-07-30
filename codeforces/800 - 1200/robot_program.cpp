#include <bits/stdc++.h>
using namespace std;


#define nl "\n"


int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x, y; cin >> x >> y;
        int ans = max(x, y) * 2 - 1;
        if (x == y) ans++;
        cout << ans << nl;
    }
}