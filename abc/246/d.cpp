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
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)

ll f(ll a, ll b) {
    return a*a*a + a*a*b + a*b*b + b*b*b;
}

int main() {
    ll N; cin >> N;

    ll X = LLONG_MAX;
    rep(a, 0, 1000001) {
        ll left = -1, right = 1010101;
        while(left + 1 != right) {
            ll b = (left + right) / 2;
            if(N <= f(a, b)) right = b;
            else left = b;
        }
        X = min(X, f(a, right));
    }
    cout << X << endl;
}