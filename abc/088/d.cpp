#include <bits/stdc++.h>
using namespace std;

int N;
vector<bool> visited;
vector<vector<int>> G;
vector<string> matrix;
vector<int> dx = {0, -1, 1, 0};
vector<int> dy = {-1, 0, 0, 1};
// 8方向の場合
// vector<int> dx = {-1, 0, 1, -1, 1, -1, 0, 1};
// vector<int> dy = {-1, -1, -1, 0, 0, 1, 1, 1};

vector<vector<int>> matrix_to_graph(int h, int w) {
    G.assign(h*w, vector<int>());
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) {
            for(int k=0; k<4; k++) {
                if(i+dy[k] < 0 || i+dy[k] >= h || j+dx[k] < 0 || j+dx[k] >= w) continue;
                if(matrix[i+dy[k]][j+dx[k]] == '.' && matrix[i][j] == '.') {
                    G[i*w+j].push_back((i+dy[k])*w+j+dx[k]);
                }
            }
        }
    }
    return G;
}

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
    int h, w; cin >> h >> w;
    N = h*w;
    matrix.resize(h);
    for(int i=0; i<h; i++) {
        cin >> matrix[i];
    }
    G = matrix_to_graph(h, w);
    visited.assign(N, true);
    for(int i=0; i<N; i++) if(matrix[i/w][i%w] == '.') visited[i] = false;

    vector<int> dist = bfs(0);
    int white_cnt = 0;
    for(int i=0; i<h; i++) for(int j=0; j<w; j++) if(matrix[i][j] == '.') white_cnt++;
    if(dist[N-1] == -1) cout << -1 << endl;
    else cout << white_cnt - dist[N-1] - 1 << endl;
}