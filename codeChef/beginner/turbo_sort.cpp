#include <bits/stdc++.h>
using namespace std;


#define nl "\n"




int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    vector<int> a;
    while(t--) {
        int N; cin >> N;
        a.push_back(N);

    }
    sort(a.begin(), a.end());
    for (int A: a)
        cout << A << nl;
}