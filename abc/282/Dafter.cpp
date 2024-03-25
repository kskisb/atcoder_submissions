#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using veci = vector<int>;
using vecll = vector<ll>;
using vecd = vector<double>;
using vveci = vector<veci>;
using vvveci = vector<vveci>;
using vvecll = vector<vecll>;
using vvvecll = vector<vvecll>;
using vvecd = vector<vecd>;
using Graph = vector<vector<int>>;
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)

ll N, M;
Graph G;
veci color;

bool dfs(int v, ll &black, ll &white, int now = 0) {
    color[v] = now;
    if(now) black++;
    else white++;
    for(auto nex : G[v]) {
        if(color[nex] != -1) {
            if(color[nex] == now) return false;
            continue;
        }
        if(!dfs(nex, black, white, 1-now)) return false;
    }
    return true;
}

int main() {
    cin >> N >> M;
    G.assign(N, veci());
    color.assign(N, -1);
    rep(i, 0, M) {
        int u, v; cin >> u >> v;
        u--; v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    ll blacksum = 0, whitesum = 0;
    bool isbipartite = true;
    rep(i, 0, N) {
        ll black = 0, white = 0;
        if(color[i] != -1) continue;
        if(!dfs(i, black, white)) isbipartite = false;
        else {
            blacksum += black*(black-1)/2;
            whitesum += white*(white-1)/2;
        }
    }

    if(isbipartite) {
        cout << N*(N-1)/2 - blacksum - whitesum - M << endl;
    } else cout << 0 << endl;
}