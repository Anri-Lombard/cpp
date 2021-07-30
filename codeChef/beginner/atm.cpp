#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef long double ld;
typedef vector<int> vi;


#define nl "\n"


void solve() {
    int X;
    double Y;
    cin >> X >> Y;
    if (Y - X - 0.50 >= 0 && X % 5 == 0)
        cout << Y - X - 0.50 << nl; 
    else
        cout << fixed << setprecision(2) << Y << nl;
}


int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    
    solve();
}