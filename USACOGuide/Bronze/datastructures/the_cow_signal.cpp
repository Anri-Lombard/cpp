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
    
    int M, N, K; cin >> M >> N >> K;

    for (int i=0; i<M; i++) {
        string signal; cin >> signal;
        for (int it=0; it<K; it++) {
            for(int j=0; j<N; j++) {
                for(int k=0;k<K;k++){
                    cout << signal[j];
                }
            }

            cout << nl;
        }
    }
}