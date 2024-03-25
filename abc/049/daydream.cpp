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
    string S; cin >> S;
    int N = S.size();
    vector<bool> dp(N+1, false);
    dp[0] = true;
    for(int i=1; i<=N; i++) {
        if(i <= N-6 && dp[i-1] && S.substr(i-1, 7) == "dreamer") dp[i+6] = true;
        if(i <= N-5 && dp[i-1] && S.substr(i-1, 6) == "eraser") dp[i+5] = true;
        if(i <= N-4 && dp[i-1] && S.substr(i-1, 5) == "dream") dp[i+4] = true;
        if(i <= N-4 && dp[i-1] && S.substr(i-1, 5) == "erase") dp[i+4] = true;
    }
    if(dp[N]) cout << "YES" << endl;
    else cout << "NO" << endl;
}