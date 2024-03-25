#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using veci = vector<int>;
using vecll = vector<ll>;
using vecd = vector<double>;
using vveci = vector<veci>;
using vvveci = vector<vveci>;
using vvecll = vector<vecll>;
using vvvecll = vector<vvecll>;
using vvecd = vector<vecd>;
using Graph = vector<vector<int>>;
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)

int main() {
    ll n, p, q, r; cin >> n >> p >> q >> r;
    ll now = 0;
    set<ll> s({0});
    rep(i, 0, n) {
        ll a; cin >> a;
        now += a;
        s.insert(now);
    }

    for(auto x : s) {
        if(s.find(x+p) != s.end() && s.find(x+p+q) != s.end() && s.find(x+p+q+r) != s.end()) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}