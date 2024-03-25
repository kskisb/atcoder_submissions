#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, W; cin >> n >> W;
    vector<int> v(n), w(n);
    vector<vector<int> > dp(n+1, vector<int>(W+1, 0));

    for(int i=0; i<n; i++) cin >> v[i] >> w[i];

    for(int i=0; i<n; i++) {
        for(int j=0; j<=W; j++) {
            if(j+w[i] <= W) dp[i+1][j+w[i]] = max(dp[i+1][j+w[i]], dp[i][j]+v[i]);
            dp[i+1][j] = max(dp[i][j], dp[i+1][j]);
        }
    }

    cout << dp[n][W] << endl;
}