#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef long double ld;
typedef vector<int> vi;

#define nl "\n";


void solve() {
    string word; cin >> word;
    int l = word.length();
    vector<int> freq(26);
    for(int i=0; i < l; i++) {
        freq[word[i] - 'a']++;
    }
    int ans = 0;
    int extra = 0;
    for (int i=0; i<26; i++) {
        if(freq[i] == 1) {
            extra += 1;
        } else if (freq[i] >= 2) {
            ans++;
        }
    }
    cout << ans + extra / 2 << nl;

    
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