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

int H, W;

int bfs(vector<string> &A) {
    vector<int> vx = {-1, 0, 1, 0}, vy = {0, 1, 0, -1};
    queue<int> que;
    int black_cnt = 0;
    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            if(A[i][j] == '#') {
                black_cnt++;
                que.push(i*W + j);
            }
        }
    }

    int ans = 0;
    while(black_cnt != H*W) {
        ans++;
        queue<int> que2;
        while(!que.empty()) {
            int v = que.front();
            que.pop();
            int row = v/W, column = v%W;
            for(int i=0; i<4; i++) {
                int x = column + vx[i], y = row + vy[i];
                if(x <= -1 || x >= W || y <= -1 || y >= H) continue;
                if(A[y][x] == '.') {
                    A[y][x] = '#';
                    black_cnt++;
                    que2.push(y*W + x);
                }
            }
        }
        int n = que2.size();
        for(int i=0; i<n; i++) {
            int q = que2.front();
            que2.pop();
            que.push(q);
        }
    }

    return ans;
}

int main() {
    cin >> H >> W;
    vector<string> A(H);
    for(int i=0; i<H; i++) cin >> A[i];

    cout << bfs(A) << endl;
}