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

int main() {
    ll N, X; cin >> N >> X;
    vecll A(N), B(N);
    rep(i, 0, N) cin >> A[i] >> B[i];

    ll now = 0, ans = LLONG_MAX;
    rep(i, 0, min(N, X)) {
        now += A[i] + B[i];
        ll tmp = now + B[i] * (X-i-1);
        ans = min(ans, tmp);
    }
    cout << ans << endl;
}