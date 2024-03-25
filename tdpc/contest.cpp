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
    vector<int> p(N+1);
    int max_sum = 0;
    for(int i=1; i<=N; i++) {
        cin >> p[i];
        max_sum += p[i];
    }
    vector<vector<int>> dp(N+1, vector<int>(max_sum+1, 0));
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=max_sum; j++) {
            if(j >= p[i]) dp[i][j] = max(dp[i-1][j], dp[i-1][j-p[i]] + p[i]);
            else dp[i][j] = dp[i-1][j];
        }
    }

    set<int> ans;
    for(int i=0; i<=max_sum; i++) ans.insert(dp[N][i]);
    cout << ans.size() << endl;
}