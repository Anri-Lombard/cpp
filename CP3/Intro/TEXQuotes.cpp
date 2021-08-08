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
    
    char c;
    bool open = true;
    while (scanf("%c", &c) != EOF) {
        if (c == '"') {
            if (open)
                printf("``");
            else
                printf("''");
            open = !open;
        }
        else {
            printf("%c", c);
        }
    }
    return 0;
}