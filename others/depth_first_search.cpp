#include <bits/stdc++.h>
using namespace std;

int N, cnt = 1;
vector<bool> visited;
vector<vector<int> > ans, G;

void dfs(int v) {
    visited[v] = true;
    ans[v][0] = cnt;
    cnt++;

    for(int i=0; i<G[v].size(); i++) {
        if(visited[G[v][i]]) continue;
        dfs(G[v][i]);
    }

    ans[v][1] = cnt;
    cnt++;
}

int main() {
    cin >> N;

    G.assign(N, vector<int>());
    ans.assign(N, vector<int>(2));
    for(int i=0; i<N; i++) {
        int a, b; cin >> a >> b;
        a--;
        for(int j=0; j<b; j++) {
            int v; cin >> v;
            G[a].push_back(v-1);
        }
    }

    visited.assign(N, false);
    for(int i=0; i<N; i++) {
        if(!visited[i]) dfs(i);
    }

    for(int i=0; i<N; i++) {
        cout << i+1 << " " << ans[i][0] << " " << ans[i][1] << endl;
    }
}