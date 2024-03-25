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
using ll = long long;
const vector<int> dx = {1, 0, -1, 0};
const vector<int> dy = {0, 1, 0, -1};

// 01-bfs
int main() {
    int H, W, sx, sy, gx, gy;
    cin >> H >> W >> sy >> sx >> gy >> gx;
    sx--; sy--; gx--; gy--;
    vector<string> S(H);
    for(int i=0; i<H; i++) cin >> S[i];

    using Node = pair<int, int>;
    deque<Node> que;
    que.push_front(Node(sy, sx));
    vector<vector<int>> dist(H, vector<int>(W, INT_MAX));
    dist[sy][sx] = 0;

    while(!que.empty()) {
        Node xy = que.front();
        int y = xy.first, x = xy.second;
        que.pop_front();

        for(int i=-2; i<=2; i++) {
            for(int j=-2; j<=2; j++) {
                if(i == 0 && j == 0) continue;
                int next_x = x + j, next_y = y + i;
                if(next_y < 0 || next_y >= H || next_x < 0 || next_x >= W) continue;
                if(S[next_y][next_x] == '#') continue;
                if((i==-1 && j==0) || (i==0 && j==1) || (i==0 && j==-1) || (i==1 && j==0)) {
                    if(dist[next_y][next_x] > dist[y][x]) {
                        dist[next_y][next_x] = dist[y][x];
                        que.push_front(Node(next_y, next_x));
                    }
                } else {
                    if(dist[next_y][next_x] > dist[y][x] + 1) {
                        dist[next_y][next_x] = dist[y][x] + 1;
                        que.push_back(Node(next_y, next_x));
                    }
                }
            }
        }
    }

    if(dist[gy][gx] == INT_MAX) cout << -1 << endl;
    else cout << dist[gy][gx] << endl;
}