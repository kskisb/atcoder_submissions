#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using veci = vector<int>;
using vecll = vector<ll>;
using vecd = vector<double>;
using vveci = vector<veci>;
using vvecll = vector<vecll>;
using vvecd = vector<vecd>;
using Graph = vector<vector<int>>;
#define rep(i, l, r) for(ll i=l; i<r; i++)
#define rrep(i, l, r) for(ll i=r-1; i>=l; i--)

int main() {
    ll N; cin >> N;
    map<ll, ll> m;
    rep(i, 0, N) {
        ll a; cin >> a;
        m[a]++;
    }

    ll ans = N*(N-1)*(N-2) / 6;
    for(auto i : m) ans -= (i.second*(i.second-1)*(i.second-2)/6 + i.second*(i.second-1)/2*(N-i.second));
    cout << ans << endl;
}