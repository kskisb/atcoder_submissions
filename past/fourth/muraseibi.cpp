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

int N, M;

bool bfs(const vector<string> S) {
    vector<int> vx = {0, -1, 1, 0}, vy = {1, 0, 0, -1};
    queue<int> que;
    vector<vector<int>> dist(N, vector<int>(M, -1));
    bool flag = false;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(S[i][j] == '.') {
                dist[i][j] = 0;
                que.push(i*M + j);
                flag = true;
            }
            if(flag) break;
        }
        if(flag) break;
    }

    while(!que.empty()) {
        int v = que.front();
        que.pop();
        int row = v / M, column = v % M;
        for(int i=0; i<4; i++) {
            int x = column + vx[i], y = row + vy[i];
            if(x <= -1 || x >= M || y <= -1 || y >= N) continue;
            if(dist[y][x] != -1) continue;
            if(S[y][x] == '#') continue;
            dist[y][x] = dist[row][column] + 1;
            que.push(y*M + x);
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(S[i][j] == '.' && dist[i][j] == -1) return false;
        }
    }
    return true;
}

int main() {
    cin >> N >> M;
    vector<string> S(N);
    int ans = 0;
    for(int i=0; i<N; i++) cin >> S[i];
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(S[i][j] == '#') {
                S[i][j] = '.';
                if(bfs(S)) ans++;
                S[i][j] = '#';
            }
        }
    }
    cout << ans << endl;
}