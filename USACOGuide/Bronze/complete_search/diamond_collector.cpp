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
    
    int n, k; cin >> n >> k;
    vector<int> a;
    a.resize(n);
    for (int i = 0;i<n;++i){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans=0;
    for (int i=0; i<n; ++i) {
        int cnt = 1;
        for (int j=i+1; j<n; ++j) {
            if(a[j] - a[i] <= k) ++cnt;
            else break;
        }
        ans=max(cnt,ans);
    }
    cout << ans;
}