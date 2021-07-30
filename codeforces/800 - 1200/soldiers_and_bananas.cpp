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
    
    int l, w, k, all, owe; cin >> l >> w >> k;
    all = 0;
    for (int i = 1; i <= k; i++)
        all += i * l;
    if (all-w > 0)
        owe = all-w;
    else
        owe = 0;
    cout << owe << nl;
}