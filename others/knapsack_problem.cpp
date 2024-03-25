#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, W; cin >> n >> W;
    vector<int> v(n+1, 0), w(n+1, 0);
    vector<vector<int> > dp(n+1, vector<int>(W+1, 0));

    for(int i=1; i<=n; i++) cin >> v[i] >> w[i];

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=W; j++) {
            if(j-w[i] >= 0) dp[i][j] = max(dp[i][j-w[i]]+v[i], dp[i-1][j-w[i]]+v[i]);
            dp[i][j] = max(dp[i][j], dp[i-1][j]);
        }
    }

    cout << dp[n][W] << endl;
}