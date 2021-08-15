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

const int N = 3;
int capacity[N], milk[N];

void pour(int i, int j) {
    int amt = min(milk[i], capacity[j]-milk[j]);

    milk[i] -= amt;
    milk[j] += amt;
}


int main(){
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i = 0; i < N; ++i)
        scanf("%d%d", capacity+i, milk+i);
    
    for(int i=0; i<100; ++i)
        pour(i%N, (i+1)%N);

    for(int i=0; i<N; ++i)
        printf("%d\n", milk[i]);

    return 0;
}