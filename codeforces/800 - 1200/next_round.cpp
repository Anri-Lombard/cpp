#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef long double ld;
typedef vector<int> vi;


#define nl "\n"



int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, K; cin >> N >> K;
    vector<int> A;
    while (N--){
        int F; cin >> F;
        A.push_back(F);
    }
    K = A[K-1];
    int through = 0;
    for (int a: A){
        if (a == 0)
            break;
        if (a >= K)
            through += 1;
    }
    cout << through << nl;
}