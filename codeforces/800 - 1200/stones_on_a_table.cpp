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
    
    int let; cin >> let;
    string st; cin >> st;
    int count = 0;
    for (int i = 0; i < let; i++){
        if(st[i] == st[i+1])
            count++;
    }
    cout << count << nl;
}