#include <bits/stdc++.h>
using namespace std;

#define FOREACH(i, c) for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
#define FOR(i, a, n) for (int i = (a); i < (int)(n); ++i)
#define FORE(i, a, n) for (i = (a); i < (int)(n); ++i)
#define Size(n) ((int)(n).size())
#define all(n) (n).begin(), (n).end()
#define ll long long
#define pb push_back
#define error(x) cout << #x << " = " << (x) << endl;
#define ull unsigned long long
#define pii pair<int, int>
//#define pii pair<ll, ll>
#define pll pair<ll, ll>
#define pdd pair<double, double>
#define point complex<double>
#define X real()
#define Y imag()
//#define X first
//#define Y second
#define EPS 1e-10
//#define endl "\n"
#define pdd pair<double, double>
#define mk make_pair
#define nl '\n'

void solve() {
    
}


int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    vector<string> v(n);
    FOR(i,0,n) cin >> v[i];
    cout << count(all(v), "++X")+count(all(v), "X++")-count(all(v), "--X")-count(all(v), "X--") << nl;

}