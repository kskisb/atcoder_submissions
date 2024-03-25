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
    int W, N, K; cin >> W >> N >> K;
    vector<int> A(N+1), B(N+1);
    for(int i=1; i<=N; i++) cin >> A[i] >> B[i];
    vector<vector<vector<int>>> dp(K+1, vector<vector<int>>(N+1, vector<int>(W+1, 0)));
    for(int i=1; i<=K; i++) {
        for(int j=1; j<=N; j++) {
            for(int k=1; k<=W; k++) {
                if(k >= A[j]) dp[i][j][k] = max({dp[i-1][j-1][k-A[j]] + B[j], dp[i-1][j][k], dp[i][j-1][k]});
                else dp[i][j][k] = max(dp[i-1][j][k], dp[i][j-1][k]);
            }
        }
    }

    for(int i=1; i<=K; i++) {
        for(int j=1; j<=N; j++) {
            for(int k=1; k<=W; k++) printf("%3d ", dp[i][j][k]);
            cout << endl;
        }
        cout << endl;
    }

    cout << dp[K][N][W] << endl;
}