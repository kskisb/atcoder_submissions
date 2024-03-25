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

vector<int> bfs(const vector<vector<int>> &G, int N) {
    queue<int> que;
    vector<int> signpost(N, -1);
    que.push(0);

    while(!que.empty()) {
        int v = que.front();
        que.pop();
        for(auto i : G[v]) {
            if(signpost[i] != -1) continue;
            que.push(i);
            signpost[i] = v;
        }
    }
    return signpost;
}

int main() {
    int N, M; cin >> N >> M;
    vector<vector<int>> G(N);
    for(int i=0; i<M; i++) {
        int a, b; cin >> a >> b;
        G[b-1].push_back(a-1);
        G[a-1].push_back(b-1);
    }

    vector<int> ans = bfs(G, N);
    bool flag = true;
    for(int i=1; i<N; i++) if(ans[i] == -1) flag = false;
    if(flag) {
        cout << "Yes" << endl;
        for(int i=1; i<N; i++) cout << ans[i] + 1 << endl;
    } else cout << "No" << endl;
}