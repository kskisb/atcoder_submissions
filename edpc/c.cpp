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
    int N; cin >> N;
    vector<vector<ll>> dp(N+1, vector<ll>(3, 0));
    for(int i=1; i<=N; i++) {
        int a, b, c; cin >> a >> b >> c;
        dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + a;
        dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + b;
        dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + c;
    }
    cout << max({dp[N][0], dp[N][1], dp[N][2]}) << endl;
}