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
    
    // read in counts for bronze
	int bronzeBefore, bronzeAfter;
	cin >> bronzeBefore >> bronzeAfter;

	// read in counts for silver
	int silverBefore, silverAfter;
	cin >> silverBefore >> silverAfter;

	// read in counts for gold
	int goldBefore, goldAfter;
	cin >> goldBefore >> goldAfter;

	// read in counts for platinum
	int platinumBefore, platinumAfter;
	cin >> platinumBefore >> platinumAfter;

    int goldToPlatinum = platinumAfter - platinumBefore;
    int silverToGold = goldAfter - goldBefore + platinumAfter - platinumBefore;
    int bronzeToSilver = silverAfter - silverBefore + goldAfter - goldBefore + platinumAfter - platinumBefore;

    cout << bronzeToSilver << nl << silverToGold << nl << goldToPlatinum << nl;
}