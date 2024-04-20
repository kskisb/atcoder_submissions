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

ll nCr(ll n, ll r) {
    ll a = 1, b = 1;
    for(int i=1; i<=n; i++) a = (a*i)%mod;
    for(int i=1; i<=r; i++) b = (b*i)%mod;
    for(int i=1; i<=n-r; i++) b = (b*i)%mod;

    return (a * power(b, mod-2)) % mod;
}

int main() {
    ll X, Y;
    cin >> X >> Y;
    ll ans = 0;
    for(ll i=0; i<=X; i++) {
        ll x_remains = X-i, y_remains = Y-2*i;
        if((X-i)%2 == 0 && (X-i)/2 == (Y-2*i)) {
            ll r = Y-2*i;
            ans += nCr(i+r, r);
            ans %= mod;
        }
    }
    cout << ans << endl;
}