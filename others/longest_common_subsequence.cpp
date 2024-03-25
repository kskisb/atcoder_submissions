#include <bits/stdc++.h>
using namespace std;

int main() {
    int q; cin >> q;
    vector<int> ans(q);

    for(int k=0; k<q; k++) {
        string x, y; cin >> x >> y;
        int x_len = x.size(), y_len = y.size();
        vector<vector<int> > dp(x_len+1, vector<int>(y_len+1, 0));

        for(int i=1; i<=x_len; i++) {
            for(int j=1; j<=y_len; j++) {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                if(x[i-1] == y[j-1]) dp[i][j] = max(dp[i-1][j-1]+1, dp[i][j]);
            }
        }

        ans[k] = dp[x_len][y_len];
    }

    for(int i=0; i<q; i++) cout << ans[i] << endl;
}