#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;


#define nl "\n"
#define vi vector<int>


void solve() {
    int n, rev = 0; cin >> n;
    int copy_n = n;
    while (copy_n > 0) {
        int ld = copy_n % 10;
        rev = rev * 10 + ld;
        copy_n /= 10;
    }
    if (rev == n) 
        cout << "wins" << nl;
    else    
        cout << "loses" << nl;
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