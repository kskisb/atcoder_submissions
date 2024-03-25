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
    int N, M; cin >> N >> M;
    vector<bool> a(N+1, true);
    for(int i=0; i<M; i++) {
        int s; cin >> s;
        a[s] = false;
    }
    vector<ll> dp(N+1, 0);
    dp[0] = 1;
    if(a[1]) dp[1] = 1;
    for(int i=2; i<=N; i++) {
        if(a[i]) dp[i] = dp[i-2] + dp[i-1];
        dp[i] %= 1000000007;
    }
    cout << dp[N] << endl;
}