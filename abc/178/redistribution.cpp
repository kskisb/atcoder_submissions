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
    int S; cin >> S;
    vector<ll> dp(S+5, 0);
    dp[3] = 1; dp[4] = 1; dp[5] = 1;
    for(int i=6; i<=S; i++) {
        for(int j=3; j<=i-3; j++) dp[i] += dp[j];
        dp[i]++;
        dp[i] %= 1000000007;
    }
    cout << dp[S] << endl;
}