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
    
    int n, q, l, r, total; cin >> n >> q;
    vector<char> song;
    for (int i =0; i<n;i++) {
        char let; cin >> let;
        song[i] = let;
    }
    while (q--) {
        total = 0;
        cin >> l >> r;
        
        cout << total << nl;
    }
}