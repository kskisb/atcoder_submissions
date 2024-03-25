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

int bfs(const vector<vector<char>> &c, int H, int W) {
    queue<int> que;
    vector<vector<int>> dist(H, vector<int>(W, -1));
    dist[0][0] = 1;
    que.push(0);

    while(!que.empty()) {
        int v = que.front();
        que.pop();

        int row = v / W, column = v % W;
        for(int i=row-1; i<=row+1; i++) {
            if(i <= -1 || i >= H) continue;
            for(int j=column-1; j<=column+1; j++) {
                if(j <= -1 || j >= W) continue;
                if(abs(row + column - i - j) == 1) {
                    if(dist[i][j] != -1) continue;
                    if(c[i][j] == '#') continue;
                    que.push(W*i + j);
                    dist[i][j] = dist[row][column] + 1;
                }
            }
        }
    }
    return dist[H-1][W-1];
}

int main() {
    int H, W; cin >> H >> W;
    vector<vector<char>> c(H, vector<char>(W));
    for(int i=0; i<H; i++) for(int j=0; j<W; j++) cin >> c[i][j];

    int white = 0;
    for(int i=0; i<H; i++) for(int j=0; j<W; j++) if(c[i][j] == '.') white++;

    int ans = bfs(c, H, W);
    if(ans != -1) cout << white - ans << endl;
    else cout << -1 << endl;
}