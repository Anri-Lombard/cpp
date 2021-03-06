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


struct Rect {
    int x1, y1, x2, y2;
    int area() { return (y2-y1) * (x2 - x1); }

};

int intersect(Rect p, Rect q) {
    int xOverlap = max(0, min(p.x2, q.x2) - max(p.x1, q.x1));
    int yOverlap = max(0, min(p.y2, q.y2) - max(p.y1, q.y1));
    return xOverlap * yOverlap;
}


int main(){
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    Rect a, b, t;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;   
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;   
    cin >> t.x1 >> t.y1 >> t.x2 >> t.y2;
    cout << a.area() + b.area() - intersect(a, t) - intersect(b, t) << endl;   
}