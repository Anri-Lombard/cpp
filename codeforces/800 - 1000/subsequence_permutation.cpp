#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef long double ld;
typedef vector<int> vi;


void solve() {
    int n;
    string s;
    cin >> n >> s;
 
    string s_ord = s;
    sort(s_ord.begin(), s_ord.end());
 
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += (s[i] != s_ord[i]);
 
    cout << ans << "\n";

}


int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
 
    for (int i = 1; i <= t; i++)
        solve();
 
    return 0;
}