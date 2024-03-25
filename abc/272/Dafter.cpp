#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using veci = vector<int>;
using vecll = vector<ll>;
using vecd = vector<double>;
using vveci = vector<veci>;
using vvecll = vector<vecll>;
using vvecd = vector<vecd>;
using Graph = vector<vector<int>>;
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)

Graph G;
int N, M;

vector<int> bfs(int s) {
    queue<int> que;

    vector<int> dist(N*N, -1);

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
    cin >> N >> M;
    G.assign(N*N, veci());
    rep(i, 0, N) {
        rep(j, 0, N) {
            rep(x, 0, N) {
                double tmp = M - (x-i)*(x-i);
                if(tmp < 0) continue;
                int sqrttmp = sqrt(tmp);
                if(sqrttmp*sqrttmp == tmp) {
                    int y1 = j + (int)sqrttmp;
                    int y2 = j - (int)sqrttmp;
                    if(y1 >= 0 && y1 < N) G[i*N+j].push_back(x*N+y1);
                    if(y2 >= 0 && y2 < N) G[i*N+j].push_back(x*N+y2);
                }
            }
        }
    }

    rep(i, 0, N*N) {
        set<int> tmp;
        for(auto j : G[i]) tmp.insert(j);
        G[i] = {};
        for(auto j : tmp) G[i].push_back(j);
    }

    veci ans = bfs(0);
    rep(i, 0, N) {
        rep(j, 0, N) cout << ans[i*N+j] << " ";
        cout << endl;
    }
}