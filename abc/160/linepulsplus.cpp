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
using ll=long long;

int N, X, Y;

void bfs(const vector<vector<int>> &G, vector<int> &ans, int s) {
    queue<int> que;
    vector<int> dist(N, -1);
    dist[s] = 0;
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
    for(int i=s; i<N; i++) {
        if(dist[i] == -1) continue;
        ans[dist[i]]++;
    }
}

int main() {
    cin >> N >> X >> Y;
    vector<vector<int>> G(N);
    for(int i=1; i<N; i++) {
        G[i-1].push_back(i);
        G[i].push_back(i-1);
    }
    G[X-1].push_back(Y-1);
    G[Y-1].push_back(X-1);

    vector<int> ans(N, 0);
    for(int i=0; i<N-1; i++) bfs(G, ans, i);
    for(int i=1; i<N; i++) cout << ans[i] << endl;
}