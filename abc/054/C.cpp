#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
#include <set>
using namespace std;
using ll=long long;

int N, M;
vector<vector<int>> G;

void dfs(vector<bool> &visited, int &ans, int v) {
    int finish = 0;
    for(int i=0; i<visited.size(); i++) if(visited[i]) finish++;
    if(finish == N) {
        ans++;
        return;
    }

    visited[v] = true;
    for(auto i : G[v]) {
        if(visited[i]) continue;
        dfs(visited, ans, i);
    }
    visited[v] = false;
}

int main() {
    cin >> N >> M;
    G.assign(N, vector<int>());
    for(int i=0; i<M; i++) {
        int u, v; cin >> u >> v;
        G[u-1].push_back(v-1);
        G[v-1].push_back(u-1);
    }

    vector<bool> visited(N, false);
    int ans = 0;
    dfs(visited, ans, 0);
    cout << ans << endl;
}