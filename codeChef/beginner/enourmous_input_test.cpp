#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef long double ld;
typedef vector<int> vi;


#define nl "\n"


void solve() {
    int N, K, total; cin >> N >> K;
    total = 0;
    while (N--) {
        int T; cin >> T;
        if (T % K == 0)
            total += 1;
    }
    cout << total << nl;

}


int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}