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


void solve() {


}


int main(){
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<bool> cover(100);
    int a, b, c, d; cin >> a >> b >> c >> d;
    for (int i = a; i < b; ++i) cover[i] = 1;
    for (int i = c; i < d; ++i) cover[i] = 1;
    int ans = 0;
    for (int i = 0; i < 100; ++i) ans += cover[i];
    cout << ans;
}