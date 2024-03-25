#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int N, M, Q; cin >> N >> M >> Q;
    vector<vector<int>> G(N);
    vector<int> c(N);
    for(int i=0; i<M; i++) {
        int u, v; cin >> u >> v; --u; --v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    for(int i=0; i<N; i++) cin >> c[i];

    vector<int> ans;
    for(int i=0; i<Q; i++) {
        int s, x; cin >> s >> x;
        ans.push_back(c[x-1]);
        if(s == 1) {
            for(int j=0; j<G[x-1].size(); j++) c[G[x-1][j]] = c[x-1];
        } else {
            int y; cin >> y;
            c[x-1] = y;
        }
    }

    cout << endl;
    for(int i=0; i<ans.size(); i++) cout << ans[i] << endl;
}