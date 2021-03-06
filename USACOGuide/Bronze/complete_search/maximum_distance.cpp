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
    
    int a,b,c,ans=0;
    cin >> a >> b >> c;
    for (int i=0; i<1001; ++i) {
        if (a*i > c) break;
        for (int j = 0; j < 1001; ++j) {
            int n = a*i + b*j;
            if (n > c) break;
            ans = max(ans, n);
        }
    }
    cout << ans;
}