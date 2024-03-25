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
    int N, L, T1, T2, T3; cin >> N >> L;
    vector<int> x(N+1);
    for(int i=1; i<=N; i++) cin >> x[i];
    cin >> T1 >> T2 >> T3;
    vector<int> dp(N+1, INT_MAX);
    dp[0] = 0;
    if(x[1] != 1) dp[1] = T1;
    for(int i=2; i<=N; i++) {
    }
}