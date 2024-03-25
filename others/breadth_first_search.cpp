#include <bits/stdc++.h>
using namespace std;

int N;
vector<vector<int> > G;

vector<int> bfs(int s) {
    queue<int> que;

    vector<int> dist(N, -1);

    dist[s] = 0;
    que.push(s);

    while(!que.empty()) {
        int v = que.front();
        que.pop();

        for(auto v2 : G[v]) {
            if(dist[v2] != -1) continue;

            que.push(v2);
            dist[v2] = dist[v] + 1;
        }
    }

    return dist;
}

int main() {
    cin >> N;
    G.assign(N, vector<int>());
    for(int i=0; i<N; i++) {
        int id, m; cin >> id >> m;
        for(int j=0; j<m; j++) {
            int v; cin >> v;
            G[i].push_back(v-1);
        }
    }

    vector<int> d = bfs(0);
    for(int i=0; i<N; i++) cout << i+1 << " " << d[i] << endl;
}