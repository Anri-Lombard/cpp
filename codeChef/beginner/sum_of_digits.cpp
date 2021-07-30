#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef long double ld;
typedef vector<int> vi;


#define nl "\n"


void solve() {
    int N; cin >> N;
    int L = 0;
    while(N != 0){
        L += N%10;
        N /= 10;
    }
    cout << L << nl;
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