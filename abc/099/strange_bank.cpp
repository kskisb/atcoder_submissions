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
    vector<int> dp(N+1, -1);
    dp[1] = 1;
    int pow9 = 1, pow6 = 1;
    for(int i=2; i<=N; i++) {
        if(i == 9*pow9) {
            pow9 *= 9;
            dp[i] = 1;
        } else if(i == 6*pow6) {
            pow6 *= 6;
            dp[i] = 1;
        } else {
            dp[i] = min(dp[i-pow9] + 1, dp[i-pow6] + 1);
        }
    }
    cout << dp[N] << endl;
}