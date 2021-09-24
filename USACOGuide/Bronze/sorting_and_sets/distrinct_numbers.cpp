#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;

    vector<int> nrs(N);
    for (int i =0; i<N; i++)
        cin >> nrs[i];

    sort(nrs.begin(), nrs.end());
    int distinct = 1;
    for(int i=1; i < N; i++) {
        distinct += (nrs[i] != nrs[i-1]);
    }
    cout << distinct << endl;
    return 0;
}