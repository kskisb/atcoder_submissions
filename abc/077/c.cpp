#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<int> a(n), b(n), c(n);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];
    for(int i=0; i<n; i++) cin >> c[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    vector<ll> b_sum(n, 0);
    for(int i=0; i<n; i++) {
        auto iter_upper = upper_bound(c.begin(), c.end(), b[i]);
        long id = distance(c.begin(), iter_upper);
        b_sum[i] += n - id;
    }
    for(int i=n-1; i>0; i--) b_sum[i-1] += b_sum[i];

    ll ans = 0;
    for(int i=0; i<n; i++) {
        auto iter_upper = upper_bound(b.begin(), b.end(), a[i]);
        long id = distance(b.begin(), iter_upper);
        ans += b_sum[id];
    }
    cout << ans << endl;
}