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
    char l; cin >> l;
    if (l == 'B' or l == 'b') {
        cout << "BattleShip" << nl;
    } else if (l == 'C' or l == 'c') {
        cout << "Cruiser" << nl;
    } else if (l == 'D' or l == 'd') {
        cout << "Destroyer" << nl;
    }  else if (l == 'F' or l == 'f') {
        cout << "Frigate" << nl;
    }


}


int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
}