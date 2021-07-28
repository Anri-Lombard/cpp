#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef long double ld;
typedef vector<int> vi;


void solve() {
    int E; cin >> E;
    int N; cin >> N;
    int totalCandies = 0;

    while(E--) {
        int I; cin >> I;
        totalCandies += I;

    }
    
    if (totalCandies > N)
        cout << "No" << "\n";
    else
        cout << "Yes" << "\n";
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