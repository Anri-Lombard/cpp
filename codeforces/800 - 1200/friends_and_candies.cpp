#include <bits/stdc++.h>
using namespace std;


#define nl "\n"


void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  int s = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    s += a[i];
  }
  if (s % n != 0) {
    cout << "-1" << endl;
    return;
  }
  s /= n;
  int res = 0;
  for (int i = 0; i < n; i++) {
    if (s < a[i]) {
      res++;
    }
  }
  cout << res << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}