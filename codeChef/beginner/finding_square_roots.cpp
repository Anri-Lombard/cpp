#include <bits/stdc++.h>
using namespace std;


#define nl "\n"


void solve() {
    int N; cin >> N;
    cout << floor(sqrt(N)) << nl;

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