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
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)
using ll = long long;

int main() {
    int N; cin >> N;
    vector<vector<int>> tasks(N+1);
    rep(i, 1, N+1) {
        int a, b; cin >> a >> b;
        tasks[a].push_back(b);
    }
    priority_queue<int> que;
    vector<int> ans(N+1, 0);
    rep(i, 1, N+1) {
        rep(j, 0, tasks[i].size()) que.push(tasks[i][j]);
        if(!que.empty()) {
            ans[i] = ans[i-1] + que.top();
            que.pop();
        }
    }
    rep(i, 1, N+1) cout << ans[i] << endl;
}