#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<long long> > dist(n, vector<long long>(n, -1));
    vector<vector<long long> > time(n, vector<long long>(n, (1LL << 60)));
    for(int i=0; i<m; i++) {
        int s, t, d, T;
        cin >> s >> t >> d >> T;
        s--; t--;
        dist[s][t] = d;
        dist[t][s] = d;
        time[s][t] = T;
        time[t][s] = T;
    }

    vector<vector<pair<long long, long long>> > dp((1<<n), vector<pair<long long, long long>>(n, {(1LL << 60), 0}));
    dp[0][0] = {0, 1};
    for(int i=0; i<(1<<n); i++) {
        for(int j=0; j<n; j++) {
            for(int k=0; k<n; k++) {
                if(i/(1<<k)%2) continue;
                if(dist[j][k] == -1) continue;
                long long arrive_at = dp[i][j].first+dist[j][k];
                if(arrive_at > time[j][k]) continue;
                if(arrive_at == dp[i+(1<<k)][k].first) {
                    dp[i+(1<<k)][k].second += dp[i][j].second;
                }
                if(arrive_at < dp[i+(1<<k)][k].first) {
                    dp[i+(1<<k)][k] = {arrive_at, dp[i][j].second};
                }
            }
        }
    }

    if(dp[(1<<n)-1][0].first == (1LL << 60)) cout << "IMPOSSIBLE" << endl;
    else cout << dp[(1<<n)-1][0].first << " " << dp[(1<<n)-1][0].second << endl;
}