#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
#include <set>
#include <queue>
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
    veci A(N), B(N), C;
    rep(i, 0, N) cin >> A[i] >> B[i];
    C.push_back(-1);
    rep(i, 0, N) {
        rep(j, 0, B[i]) C.push_back(A[i]);
    }

    sort(C.begin(), C.end());
    int n = C.size();
    vector<vector<bool>> dp(n+1, vector<bool>(X+1, false));
    dp[0][0] = true;

    rep(i, 1, n+1) {
        rep(j, 0, X+1) {
            if(j < C[i]) {
                if(dp[i-1][j]) dp[i][j] = true;
                else dp[i][j] = false;
            }
            if(j >= C[i]) {
                if(dp[i-1][j] || dp[i-1][j-C[i]]) dp[i][j] = true;
                else dp[i][j] = false;
            }
        }
    }

    if(dp[n][X]) cout << "Yes" << endl;
    else cout << "No" << endl;
}