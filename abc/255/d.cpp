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
    int N, Q; cin >> N >> Q;
    ll A[N+1], sumA[N+1];
    A[0] = 0; sumA[0] = 0;
    rep(i, 1, N+1) cin >> A[i];
    sort(A, A+N+1);
    rep(i, 1, N+1) sumA[i] = sumA[i-1] + A[i];

    vecll ans(Q);
    rep(q, 0, Q) {
        ll X; cin >> X;
        ll k = upper_bound(A+1, A+N+1, X) - A;
        ll tmp = (k-1) * X - sumA[k-1] - (N-k+1) * X + sumA[N] - sumA[k-1];
        ans[q] = tmp;
    }

    for(auto a : ans) cout << a << endl;
}