#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<int> c(m+1);
    vector<vector<int> > dp(m+1, vector<int>(n+1, n));

    for(int i=1; i<=m; i++) cin >> c[i];

    for(int i=0; i<=m; i++) dp[i][0] = 0;
    for(int i=1; i<=m; i++) {
        for(int j=1; j<=n; j++) {
            if(j-c[i] >= 0) dp[i][j] = min(dp[i][j-c[i]]+1, dp[i-1][j-c[i]]+1);
            dp[i][j] = min(dp[i][j], dp[i-1][j]);
        }
    }

    cout << dp[m][n] << endl;
}