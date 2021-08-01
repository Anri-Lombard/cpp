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
    int p, count = 0;
    cin >> p;
    int a[] = {1, 2, 5, 10, 50, 100};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = n-1; i>=0; i--) {
        while (p>=a[i]) {
            p -= a[i];
            count++;
        }
    }
    cout << count << nl;
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