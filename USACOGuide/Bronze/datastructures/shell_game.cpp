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


int N, shell_pos[3], counter[3];


int main(){
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    scanf("%d", &N);
    for (int i=0; i<3; ++i) shell_pos[i] = i;

    for (int i=0; i<N; ++i) {
        int a, b, g;
        scanf("%d%d%d", &a, &b, &g);
        --a, --b, --g;
        swap(shell_pos[a], shell_pos[b]);
        ++counter[shell_pos[g]];
    }
    printf("%d\n", max({counter[0], counter[1], counter[2]}));
    return 0;
}