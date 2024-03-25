#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    ll ans = 100000000000;
    for(int i=0; i<=2*max(x, y); i += 2) {
        ll x_tmp = x;
        ll y_tmp = y;
        x_tmp -= i/2;
        y_tmp -= i/2;
        ll tmp = i*c;
        if(x_tmp > 0) tmp += x_tmp*a;
        if(y_tmp > 0) tmp += y_tmp*b;
        ans = min(ans, tmp);
    }

    cout << ans << endl;
}