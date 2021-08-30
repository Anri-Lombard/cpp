#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll N, ll M) {
    bool front = N < M ? 1:0;
    bool direction = 1;
    ll step = 1;
    ll totalSteps = 0;
    ll worstCase = 9*abs(N-M);
    while (totalSteps <= worstCase) {
        if ((direction && N + step >= M && front) || (!direction && N - step <= M && !front)) {
            totalSteps += abs(N-M);
            break;
        }
        step *= 2;
        totalSteps += step;
        direction = !direction;
    }
    cout << totalSteps << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    ll N, M;
    cin >> N >> M;
    solve(N, M);
    return 0;
}