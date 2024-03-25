#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s, k; cin >> n >> s >> k;
    int cost = 0;
    for(int i=0; i<n; i++) {
        int p, q; cin >> p >> q;
        cost += p*q;
    }

    if(cost >= s) cout << cost << endl;
    else cout << cost + k << endl;
}