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
    
    string us; cin >> us;
    sort(us.begin(), us.end());
    int l = us.length();
    int ans = 0;
    for (int i = 1; i<l; i++){
        if(us[i] != us[i-1])
            ans++;
    }

    if (ans&1)
        cout << "CHAT WITH HER!" << nl;
    else
        cout << "IGNORE HIM!" << nl;
}