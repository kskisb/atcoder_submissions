#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <climits>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;
using ll = long long;
ll INF = 1LL << 60;
ll mod = 1000000007;

ll power(ll m, ll n) {
    ll p = m, ans = 1;
    for(int i=0; i<60; i++) {
        ll d = (1LL << i);
        if((n/d)%2) ans = (ans*p)%mod;
        p = (p*p)%mod;
    }
    return ans;
}

int main() {
    int N, Q; cin >> N >> Q;
    vector<ll> a(N+1, 0), c(Q+2), mod_sum(N+1, 0);
    for(int i=1; i<N+1; i++) cin >> a[i];
    for(int i=0; i<Q; i++) cin >> c[i+1];
    c[0] = 1; c[Q+1] = 1;

    for(int i=1; i<N+1; i++) {
        ll tmp = power(a[i-1], a[i]);
        mod_sum[i] = mod_sum[i-1] + tmp;
    }

    ll ans = 0;
    for(int i=0; i<Q+1; i++) {
        ans += (abs(mod_sum[c[i+1]] - mod_sum[c[i]]))%mod;
    }
    cout << ans%mod << endl;
}