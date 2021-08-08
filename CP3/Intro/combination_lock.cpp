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
    
    int i, x, y, z;
    while (scanf("%d %d %d %d", &i, &x, &y, &z) && i|x|y|z) {
        int res = 0;
        res += 80;
        res += (i - x < 0 ? 40 + (i - x) : (i - x)); // anticlockwise
        res += 40;
        res += (y - x < 0 ? 40 + (y - x) : (y - x)); // clockwise
        res += (y - z < 0 ? 40 + (y - z) : (y - z)); // anticlockwise
        res *= 9;
        printf("%d\n", res);
    }
}