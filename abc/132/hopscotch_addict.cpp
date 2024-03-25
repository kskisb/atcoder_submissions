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

int N, M;

void bfs(vector<vector<int>> &G, int s, int t, int &ans) {
    vector<int> dist(3*N, -1);
    dist[s] = 0;
    queue<int> que;
    que.push(s);
    while(!que.empty()) {
        int v = que.front();
        que.pop();
        for(auto i : G[v]) {
            if(dist[i] != -1) continue;
            que.push(i);
            dist[i] = dist[v] + 1;
        }
    }
    for(int i=0; i<3; i++) if(dist[3*t+i]%3 == 0) ans = min(ans, dist[3*t+i]/3);
}

int main() {
    cin >> N >> M;
    vector<vector<int>> G(3*N);
    for(int i=0; i<M; i++) {
        int u, v; cin >> u >> v;
        u--; v--;
        G[3*u].push_back(3*v+1);
        G[3*u+1].push_back(3*v+2);
        G[3*u+2].push_back(3*v);
    }
    int s, t; cin >> s >> t;
    s--; t--;
    int ans = INT_MAX;
    for(int i=0; i<3; i++) bfs(G, 3*s+i, t, ans);
    if(ans == INT_MAX) cout << -1 << endl;
    else cout << ans << endl;
}