#include <bits/stdc++.h>
using namespace std;


#define nl "\n"


void solve() {  
    int N; cin >> N;
    int fours = 0;
    int rem = 0;
    while (N != 0){
        rem = N % 10;
        if (rem == 4)
            fours += 1;
        N /= 10;
    }
    cout << fours << nl;
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