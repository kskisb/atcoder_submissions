#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n;
    vector<int> a(n), m(q);
    for(int i=0; i<n; i++) cin >> a[i];
    cin >> q;
    for(int i=0; i<q; i++) cin >> m[i];

    set<int> S;
    for(int bit=0; bit<(1<<n); bit++) {
        int tmp = 0;
        for(int i=0; i<n; i++) {
            if(bit & (1<<i)) tmp += a[i];
        }
        S.insert(tmp);
    }

    for(int i=0; i<q; i++) {
        if(S.count(m[i])) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}