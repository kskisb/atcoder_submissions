#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    vector<vector<int>> G(N);
    for(int i=0; i<M; i++) {
        int a, b; cin >> a >> b; a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    bool flag = false;
    for(int i=0; i<G[0].size(); i++) {
        int v = G[0][i];
        for(int j=0; j<G[v].size(); j++) {
            if(G[v][j] == N-1) flag = true;
        }
    }
    if(flag) cout << "POSSIBLE" << endl;
    else cout << "IMPOSSIBLE" << endl;
}