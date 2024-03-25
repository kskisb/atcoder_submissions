#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

using Graph = vector<vector<int>>;
vector<bool> seen;

void dfs(const Graph &G, int v) {
    seen[v] = true;

    for(auto next_v : G[v]) {
        if(seen[next_v]) continue;
        dfs(G, next_v);
    }
}

int main() {
    int N, M; cin >> N >> M;
    Graph G(N);
    vector<int> a(M), b(M);
    for(int i=0; i<M; i++) {
        cin >> a[i] >> b[i];
        G[a[i]-1].push_back(b[i]-1);
        G[b[i]-1].push_back(a[i]-1);
    }

    int ans = 0;
    for(int i=0; i<M; i++) {
        int cnt = 0;
        seen.assign(N, false);
        G[a[i]-1].erase(cbegin(G[a[i]-1]));
        G[b[i]-1].erase(cbegin(G[b[i]-1]));
        for(int v=0; v<N; v++) {
            if(seen[v]) continue;
            dfs(G, v);
            cnt++;
            if(cnt > 1) ans++;
        }
        G[a[i]-1].push_back(b[i]-1);
        G[b[i]-1].push_back(a[i]-1);
    }
    cout << ans << endl;
}