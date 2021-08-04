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


}


const int maxn = 1186570;
    int sumN[maxn+10];
    // pre-computation of sum of first N natural numbers 
    void pre() {
        for(int i=1; i<=maxn; i++) {
            sumN[i] = sumN[i-1] + i;
        }
    }
    int main() {
        pre();
        int T; cin >> T;
        while( T-- ) {
            int N;
            int D;
            cin >> N >> D;
            int ans = N;
            while(D -- ) {
                ans = sumN[ans];
            }
            cout << ans << "\n";
        }
        return 0;
    }