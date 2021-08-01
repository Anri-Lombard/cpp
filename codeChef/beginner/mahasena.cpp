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


int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, w; cin >> n;
    int lucky_count = 0;   
    int unlucky_count = 0; 
    while (n--) {
        cin >> w;
        if (w % 2 == 0)
            lucky_count += 1;
        else  
            unlucky_count += 1;
    }
    if (lucky_count > unlucky_count)
        cout << "READY FOR BATTLE" << nl;
    else  
        cout << "NOT READY" << nl;
}