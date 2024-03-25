#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, k; cin >> n >> k;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    ll ans = LLONG_MAX;
    for(int bit=0; bit<(1<<n); bit++) {
        bitset<15> bs(bit);
        int num = bs.count();
        if(num < k) continue;

        vector<ll> tmp = a;
        ll now = 0, sum = 0;
        for(int i=0; i<n; i++) {
            if(bit & (1<<i)) {
                if(now >= tmp[i]) {
                    sum += now-tmp[i]+1;
                    now++;
                    tmp[i] = now;
                } else {
                    now = tmp[i];
                }
            }
        }

        now = tmp[0];
        int cnt = 1;
        for(int i=1; i<n; i++) {
            if(now < tmp[i]) {
                cnt++;
                now = tmp[i];
            }
        }
        if(cnt >= k) ans = min(ans, sum);
    }
    cout << ans << endl;
}