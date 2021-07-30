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
    
    int t, n; cin >> t;

    while(t--) {
        cin >> n;
        cout << (n <= 3? n-1 : 2 + (n&1)) << '\n';
    }
}