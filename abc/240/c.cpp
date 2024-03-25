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
    int N, X; cin >> N >> X;
    veci a(N), b(N);
    rep(i, 0, N) cin >> a[i] >> b[i];

    vector<vector<bool>> dp(N+1, vector<bool>(10001, false));

    dp[0][0] = true;
    rep(i, 0, N) {
        rep(j, 0, 10001) {
            if(dp[i][j]) {
                dp[i+1][j+a[i]] = true;
                dp[i+1][j+b[i]] = true;
            }
        }
    }

    if(dp[N][X]) cout << "Yes" << endl;
    else cout << "No" << endl;
}