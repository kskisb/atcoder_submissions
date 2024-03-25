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
    int N; cin >> N;
    vvecll dp(N, vecll(9, 0));
    rep(i, 0, 9) dp[0][i] = 1;

    ll mod = 998244353;
    rep(i, 0, N-1) {
        rep(j, 0, 9) {
            dp[i][j] %= mod;
            if(j == 0) {
                dp[i+1][j] += dp[i][j];
                dp[i+1][j+1] += dp[i][j];
            } else if(j == 8) {
                dp[i+1][j-1] += dp[i][j];
                dp[i+1][j] += dp[i][j];
            } else {
                dp[i+1][j-1] += dp[i][j];
                dp[i+1][j] += dp[i][j];
                dp[i+1][j+1] += dp[i][j];
            }
        }
    }

    ll ans = 0;
    rep(i, 0, 9) {
        ans += dp[N-1][i];
        ans %= mod;
    }
    cout << ans << endl;
}