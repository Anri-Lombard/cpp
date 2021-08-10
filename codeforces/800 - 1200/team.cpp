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


int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int ans = 0;
    int t; cin >> t;
    
    while(t--) {
        int tempsureness = 0;
        vector<bool> sureness(3);

        for (int a=0; a < 3; ++a){
            int choice; cin >> choice;
            sureness[a] = choice;
        }
        for (int b: sureness) tempsureness += b;
        if (tempsureness > 1) ans += 1;
    }
    cout << ans << nl;
}