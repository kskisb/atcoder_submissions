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

int main() {
    int N, W; cin >> N >> W;
    vector<vector<ll>> dp(N+1, vector<ll>(W+1, 0));
    for(int i=1; i<=N; i++) {
        int w, v; cin >> w >> v;
        for(int j=1; j<=W; j++) {
            if(j >= w) dp[i][j] = max(dp[i-1][j], dp[i-1][j-w] + v);
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout << dp[N][W] << endl;
}