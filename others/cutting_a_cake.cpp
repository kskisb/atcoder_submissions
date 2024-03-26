#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n; cin >> n;
    vector<long long> a(2*n);
    vector<vector<long long>> dp(n+2, vector<long long>(2*n+2, 0));
    a[0] = 0;
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=n+1; i<2*n; i++) a[i] = a[i-n];

    for(int i=0; i<n+1; i++) {
        for(int j=1; j<=n; j++) {
            if((n-i)%2 == 1) {
                dp[j][i+j] = max(dp[j+1][i+j]+a[j], dp[j][i+j-1]+a[i+j]);
            } else {
                if(a[j] > a[i+j]) dp[j][i+j] = dp[j+1][i+j];
                else dp[j][i+j] = dp[j][i+j-1];
            }
        }
        dp[n+1][n+i+1] = dp[1][i+1];
    }

    long long ans = 0;
    for(int i=1; i<=n; i++) ans = max(ans, dp[i][i+n]);
    cout << ans << endl;
}