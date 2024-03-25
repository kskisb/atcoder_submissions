#include <bits/stdc++.h>
using namespace std;

int N;
vector<bool> visited;
vector<vector<int>> G;
vector<long long> ans;

void dfs(int v) {
    visited[v] = true;

    for(auto next : G[v]) {
        if(visited[next]) continue;
        ans[next] += ans[v];
        dfs(next);
    }
}

int main() {
    int Q;
    cin >> N >> Q;

    G.assign(N, vector<int>());
    ans.assign(N, 0);
    for(int i=0; i<N-1; i++) {
        int a, b; cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }

    for(int i=0; i<Q; i++) {
        int p, x; cin >> p >> x;
        ans[p-1] += x;
    }

    visited.assign(N, false);
    dfs(0);

    for(int i=0; i<N; i++) cout << ans[i] << " ";
    cout << endl;
}