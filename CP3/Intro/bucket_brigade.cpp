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
    
    int barn_i = 0, barn_j = 0, rock_i = 0, rock_j = 0, lake_i = 0, lake_j = 0;
    for (int i =0; i<10; i++){
        string row;
		cin >> row;
		for (int j = 0; j < 10; j++)
		{
			if (row[j] == 'B')
			{
				barn_i = i;
				barn_j = j;
			}
			else if (row[j] == 'R')
			{
				rock_i = i;
				rock_j = j;
			}
			else if (row[j] == 'L')
			{
				lake_i = i;
				lake_j = j;
			}
		}
    }

    int cows = abs(barn_i - lake_i) + abs(barn_j - lake_j) - 1;

    if (barn_i == lake_i && rock_i == barn_i && ((lake_j < rock_j && rock_j < barn_j) || (barn_j < rock_j && rock_j < lake_j)))
    {
        cows += 2;
    }
    else if (barn_j == lake_j && rock_j == barn_j && ((lake_i < rock_i && rock_i < barn_i) || (barn_i < rock_i && rock_i < lake_i)))
    {
        cows += 2;
    }
    cout << cows << nl;
}