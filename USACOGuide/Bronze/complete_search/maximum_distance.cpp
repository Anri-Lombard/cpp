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
    
    int N; cin >> N;
    vector<int> x(N), y(N);
    for (int& t: x) cin >> t;
    for (int& t: y) cin >> t;
    int max_square = 0;
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            int dx = x[i]-x[j], dy=y[i]-y[j];
            int square = dx*dx+dy*dy;
            max_square = max(max_square, square);
        }
    }
    cout << max_square;
}