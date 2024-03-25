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
vector<bool> visited;

void dfs(int v) {
    visited[v] = true;

    for(auto next : G[v]) {
        if(visited[next]) continue;
        dfs(next);
    }
}

int main() {
    int N; cin >> N;
    ll sx, sy, tx, ty; cin >> sx >> sy >> tx >> ty;
    vecll x(N), y(N), r(N);
    rep(i, 0, N) cin >> x[i] >> y[i] >> r[i];

    G.assign(N, veci());
    visited.assign(N, false);
    rep(i, 0, N) {
        rep(j, i+1, N) {
            ll d = (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]);
            if((r[i]-r[j])*(r[i]-r[j]) <= d && d <= (r[i]+r[j])*(r[i]+r[j])) {
                G[i].push_back(j);
                G[j].push_back(i);
            }
        }
    }

    int s, t;
    rep(i, 0, N) {
        if((x[i]-sx)*(x[i]-sx) + (y[i]-sy)*(y[i]-sy) == r[i]*r[i]) s = i;
        if((x[i]-tx)*(x[i]-tx) + (y[i]-ty)*(y[i]-ty) == r[i]*r[i]) t = i;
    }

    dfs(s);
    if(visited[t]) cout << "Yes" << endl;
    else cout << "No" << endl;
}