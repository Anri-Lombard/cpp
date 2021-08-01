#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;


#define nl "\n"


void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto &x: a) {
        cin >> x;
    }
    long long ans = 0;
    for (int i = 1; i <n; i++) {
        ans = max(ans, 1LL * a[i] * a[i-1]);
    }
    cout << ans << nl;

}


int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
}