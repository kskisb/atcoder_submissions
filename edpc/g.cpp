#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using veci = vector<int>;
using vecll = vector<ll>;
using vecd = vector<double>;
using vveci = vector<veci>;
using vvveci = vector<vveci>;
using vvecll = vector<vecll>;
using vvvecll = vector<vvecll>;
using vvecd = vector<vecd>;
using Graph = vector<vector<int>>;
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)

Graph G;
veci indeg, dp;
vector<bool> visited;

int dfs(int v) {
    visited[v] = true;
    dp[v] = 0;

    for(auto nex : G[v]) {
        if(!visited[nex]) {
            int tmp = dfs(nex);
            dp[v] = max(dp[v], tmp+1);
        }
    }

    return dp[v];
}

int main() {
    int N, M; cin >> N >> M;
    G.assign(N, veci());
    visited.assign(N, false);
    indeg.assign(N, 0);
    dp.assign(N, 0);
    rep(i, 0, M) {
        int x, y; cin >> x >> y; x--; y--;
        G[x].push_back(y);
        G[y].push_back(x);
        indeg[y]++;
    }

    rep(i, 0, N) if(!indeg[i]) dfs(i);

    cout << endl;
    rep(i, 0, N) cout << i+1 << " " << dp[i] << endl;
}