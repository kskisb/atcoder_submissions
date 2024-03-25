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
    int N, M; cin >> N >> M;
    vecll X(N+1), C(M), Y(M);
    rep(i, 1, N+1) cin >> X[i];
    rep(i, 0, M) cin >> C[i] >> Y[i];

    vecll y(N+1, 0);
    rep(i, 0, M) y[C[i]] = Y[i];
    
    vvecll dp(N+1, vecll(N+1, -1));
    dp[0][0] = 0;
    rep(i, 0, N) {
        rep(j, 0, i+1) {
            dp[i+1][0] = max(dp[i][j], dp[i+1][0]);
            dp[i+1][j+1] = max(dp[i][j]+X[i+1]+y[j+1], dp[i+1][j+1]);
        }
    }
    ll ans = 0;
    rep(i, 0, N+1) ans = max(ans, dp[N][i]);
    cout << ans << endl;
}