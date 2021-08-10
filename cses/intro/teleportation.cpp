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
    
    int a, b, x, y, dist = 0; cin >> a >> b >> x >> y;
    x < y ? dist += abs(x-a), a = x : dist += abs(y-a), a = y;
    a == x ? a = y : a = x;
    dist += abs(a - b);
    cout << dist << nl;
}