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
    int N, M, K; cin >> N >> M >> K;
    vvecll dp(51, vecll(10000, 0));
    ll mod = 998244353;

    rep(j, 1, M+1) dp[1][j] = 1;

    rep(i, 1, N) {
        rep(j, i, K-N+i+1) {
            rep(k, 1, M+1) {
                if(j+k > K-N+i + 1) continue;
                dp[i+1][j+k] += dp[i][j];
                dp[i+1][j+k] %= mod;
            }
        }
    }

    ll ans = 0;
    rep(i, 1, K+1) {
        ans += dp[N][i];
        ans %= mod;
    }
    cout << ans << endl;
}