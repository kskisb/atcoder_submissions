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

int H = 403, W = 403;

int bfs(const vector<vector<char>> c, int X, int Y) {
    vector<int> vx = {-1, 0, 1, -1, 1, 0}, vy = {1, 1, 1, 0, 0, -1};
    queue<int> que;
    vector<vector<int>> dist(H, vector<int>(W, -1));
    dist[201][201] = 0;
    que.push(W*201 + 201);

    while(!que.empty()) {
        int v = que.front();
        que.pop();
        int row = v / W, column = v % W;
        for(int i=0; i<6; i++) {
            int x = column + vx[i], y = row + vy[i];
            if(x <= -1 || x >= W || y <= -1 || y >= H) continue;
            if(dist[y][x] != -1) continue;
            if(c[y][x] == '#') continue;
            dist[y][x] = dist[row][column] + 1;
            que.push(y*W + x);
        }
    }
    return dist[Y+201][X+201];
}

int main() {
    int N, X, Y; cin >> N >> X >> Y;
    vector<vector<char>> c(H, vector<char>(W, '.'));
    for(int i=0; i<N; i++) {
        int x, y; cin >> x >> y;
        c[y+201][x+201] = '#';
    }
    cout << bfs(c, X, Y) << endl;
}