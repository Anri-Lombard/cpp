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
// #ifndef ONLINE_JUDGE
//     freopen("../input.txt", "r", stdin);
//     freopen("../output.txt", "w", stdout);
// #endif
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int words, limit; cin >> words >> limit;
    int let = 0;
    for(int i = 0; i < words; ++i) {
        string word; cin >> word;
        let += word.length();
        if (let > 7) {
            if(i) cout << " ";
            cout << word;
        } else {
            cout << "\n" << word;
            let += word.length();
        }
    }
}