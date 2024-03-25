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
    int N, K, D; cin >> N >> K >> D;
    vecll a(N);
    rep(i, 0, N) cin >> a[i];
    vvvecll dp(N+1, vvecll(K+1, vecll(D, -1)));
    dp[0][0][0] = 0;
    rep(i, 0, N) {
        rep(j, 0, K+1) {
            rep(k, 0, D) {
                if(dp[i][j][k] == -1) continue;
                dp[i+1][j][k] = max(dp[i+1][j][k], dp[i][j][k]);
                if(j != K) dp[i+1][j+1][(k+a[i])%D] = max(dp[i+1][j+1][(k+a[i])%D], dp[i][j][k]+a[i]);
            }
        }
    }

    cout << dp[N][K][0] << endl;
}