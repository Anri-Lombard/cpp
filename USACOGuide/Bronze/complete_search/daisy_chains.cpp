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
    
    int n; cin >> n;
    int petals[n];
    for(int i=0; i<n; ++i) {
        cin >> petals[i];
    }
    int photos = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = i; j < n; ++j) {
			int totalPetals = 0;
			for (int k = i; k <= j; ++k) {
				totalPetals += petals[k];
			}
			bool present = false;
			for (int k = i; k <= j; ++k) {
				if (petals[k] * (j-i+1) == totalPetals) {
					present = true;
				}
			}
			if (present) {
				++photos;
			}
		}
	}
	cout << photos;
}