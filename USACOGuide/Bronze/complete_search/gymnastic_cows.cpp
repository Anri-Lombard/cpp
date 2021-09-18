#include <bits/stdc++.h>
using namespace std;

bool b[20][20];

int main() {
    int k, n; cin >> k >> n;
    int a[n];
    while (k--) {
        for (int i=0; i < n; i++) cin >> a[i];

        for (int i=0; i < n; i++) {
            for (int j=i+1; j<n; j++){
                b[a[i]-1][a[j]-1] = true;
            }
        }
    }

    int count;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if(!b[i][j] || !b[j][i]) count++;
        }
    }

    cout << count << endl;
}