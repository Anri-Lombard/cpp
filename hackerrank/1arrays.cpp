#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef long double ld;
typedef vector<int> vi;


void solve() {
    int N; cin >> N;
    vector<int> A;

    for (int i=0; i<N; i++){
        int a; cin >> a;
        A.push_back(a);
    }

    reverse(A.begin(), A.end());
    for (int i=0; i < A.size(); i++) 
        cout << A[i] << " ";
}


int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}