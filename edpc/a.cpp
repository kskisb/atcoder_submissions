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

vector<ll> h, dp;

ll rec(int n) {
    if(n == 0) return dp[0] = 0;
    if(n == 1) return dp[1] = abs(h[n-1] - h[n]);
    if(dp[n] != -1) return dp[n];
    return dp[n] = min(rec(n-1) + abs(h[n-1] - h[n]), rec(n-2) + abs(h[n-2] - h[n]));
}

int main() {
    int N; cin >> N;
    h.resize(N);
    dp.resize(N, -1);
    for(int i=0; i<N; i++) cin >> h[i];
    cout << rec(N-1) << endl;
}