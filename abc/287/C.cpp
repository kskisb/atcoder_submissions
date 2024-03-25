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
vector<bool> seen;

void dfs(int v) {
    seen[v] = true;
    for(auto v2 : G[v]) {
        if(seen[v2]) {continue;}
        dfs(v2);
    }
    return;
}

int main() {
    int N, M; cin >> N >> M;
    G.assign(N, veci());
    seen.assign(N, false);
    rep(i, 0, M) {
        int u, v; cin >> u >> v;
        u--; v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    int v1 = -1, v2 = -1, cnt1 = 0, cnt2 = 0;
    rep(i, 0, N) {
        if(G[i].size() == 1) {
            if(v1 == -1) v1 = i;
            else v2 = i;
            cnt1++;
        } else if(G[i].size() == 2) {
            cnt2++;
        }
    }

    if(v1 != -1 && v2 != -1 && cnt1 == 2 && cnt2 == N-2) {
        dfs(v1);
        rrep(i, 0, N) {
            if(!seen[i]) {
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}