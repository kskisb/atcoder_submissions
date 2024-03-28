#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int v, e;
    cin >> v >> e;
    vector<vector<int> > dist(v, vector<int>(v, -1));
    for(int i=0; i<e; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        dist[s][t] = d;
    }

    vector<vector<int> > dp((1<<v), vector<int>(v, 1e9));
    dp[0][0] = 0;
    for(int i=0; i<(1<<v); i++) {
        for(int j=0; j<v; j++) {
            for(int k=0; k<v; k++) {
                if((i/(1<<k)%2) || dist[j][k] == -1) continue;
                dp[i+(1<<k)][k] = min(dp[i+(1<<k)][k], dp[i][j]+dist[j][k]);
            }
        }
    }

    if(dp[(1<<v)-1][0] == 1e9) cout << -1 << endl;
    else cout << dp[(1<<v)-1][0] << endl;
}