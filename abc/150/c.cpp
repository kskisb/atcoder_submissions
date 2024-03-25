#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<int> p(n), q(n);
    int id[n];
    for(int i=0; i<n; i++) cin >> p[i];
    for(int i=0; i<n; i++) cin >> q[i];
    for(int i=0; i<n; i++) id[i] = i+1;

    int cnt = 0, a, b;
    do {
        bool flag = true;
        for(int i=0; i<n; i++) if(id[i] != p[i]) flag = false;
        if(flag) a = cnt;
        flag = true;
        for(int i=0; i<n; i++) if(id[i] != q[i]) flag = false;
        if(flag) b = cnt;
        cnt++;
    } while(next_permutation(id, id+n));

    cout << abs(a-b) << endl;
}