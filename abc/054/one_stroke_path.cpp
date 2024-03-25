#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

using Graph = vector<vector<int>>;
Graph G;

void dfs(int v, vector<bool> &seen, int &ans) {
    bool end = true;
    for(int i=0; i<seen.size(); i++) {
        if(!seen[i] && i != v) end = false;
    }
    if(end) {
        ans++; return;
    }

    seen[v] = true;
    for(auto i : G[v]) {
        if(seen[i]) continue;
        dfs(i, seen, ans);
    }
    seen[v] = false;
}

int main() {
    int N, M; cin >> N >> M;
    G.assign(N, vector<int>());
    for(int i=0; i<M; i++) {
        int a, b; cin >> a >> b; a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    vector<bool> seen(N, false);
    int ans = 0;
    dfs(0, seen, ans);
    cout << ans << endl;
}