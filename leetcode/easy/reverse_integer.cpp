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
    
    int t; cin >> t;
    int rev = 0;
    while (t != 0){
        int rem = t % 10;
        rev = rev * 10 + rem;
        t /= 10;
    };
    cout << rev << nl;
}