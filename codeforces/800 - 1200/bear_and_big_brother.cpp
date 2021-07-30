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
    
    int l, b; cin >> l >> b;
    int y = 0;
    while (l <= b) {
        y++;
        l *= 3;
        b *= 2;
    }
    cout << y << nl;
}