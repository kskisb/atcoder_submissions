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

int N, M;
Graph G;
int cnt = 0;
vector<bool> seen;

void dfs(int now, int prev) {
    seen[now] = true;

    for(auto next : G[now]) { 
        if(next == prev) continue;
        if(seen[next]) {
            cnt++;
            continue;
        }
        dfs(next, now);
    }
}

int main() {
    cin >> N >> M;

    G.assign(N, veci());
    rep(i, 0, M) {
        int a, b; cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    seen.assign(N, false);
    rep(i, 0, N) if(!seen[i]) dfs(i, -1);
    cout << cnt/2 << endl;
}