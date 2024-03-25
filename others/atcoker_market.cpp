#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<ll> a(n), b(n);
    for(int i=0; i<n; i++) cin >> a[i] >> b[i];

    ll ans = LLONG_MAX;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            ll tmp = 0;
            for(int k=0; k<n; k++) tmp += abs(a[k]-b[k]) + abs(a[k]-a[i]) + abs(b[k]-b[j]);
            ans = min(ans, tmp);
        }
    }
    cout << ans << endl;
}