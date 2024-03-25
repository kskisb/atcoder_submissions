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
    int N, K; cin >> N >> K;
    vector<int> h(N+1);
    for(int i=1; i<=N; i++) cin >> h[i];
    vector<ll> dp(N+1, LLONG_MAX);
    dp[1] = 0;
    for(int i=2; i<=N; i++) {
        for(int j=max(i-K, 1); j<i; j++) {
            dp[i] = min(dp[i], dp[j] + abs(h[i] - h[j]));
        }
    }
    cout << dp[N] << endl;
}