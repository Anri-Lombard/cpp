#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef long double ld;
typedef vector<int> vi;


#define nl "\n"


void solve() {
    int N; cin >> N;
    int ld = N % 10;

    int rev = 0;
    while(N != 0) {
        int d = N% 10;
        rev = rev * 10 + d;
        N /= 10;
    }  
    int fd = rev % 10;
    cout << ld + fd << nl;
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