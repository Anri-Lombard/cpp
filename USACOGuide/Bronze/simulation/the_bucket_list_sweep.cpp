#include <bits/stdc++.h>
using namespace std;

int event[1001];

int main() {
    int max_time = 1000;
    int N; cin >> N;

    for (int i=0; i<N; i++) {
        int start, end, amt;
        cin >> start >> end >> amt;

        event[start] += amt;
        event[end] -= amt;
    }

    int res = 0, cur = 0;
    for (int i = 0; i <= max_time; i++) {
        cur += event[i];
        res = max(res,cur);
    }

    cout <<res << "\n";
}