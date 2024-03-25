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

veci asc_topological_sort() {
    veci ans, indeg(N);  // ans はﾄﾎﾟﾛｼﾞｶﾙｿｰﾄされる頂点集合. indeg は辺の入次数

    rep(i, 0, N) for(auto j : G[i]) indeg[j]++;

    priority_queue<int, veci, greater<int>> que;

    rep(i, 0, N) if(!indeg[i]) que.push(i);

    while(!que.empty()) {
        int now = que.top();
        ans.push_back(now);
        que.pop();
        for(auto nex : G[now]) {
            indeg[nex]--;
            if(!indeg[nex]) que.push(nex);
        }
    }

    if(ans.size() != N) return {};

    return ans;
}

veci desc_topological_sort() {
    veci ans, indeg(N);  // ans はﾄﾎﾟﾛｼﾞｶﾙｿｰﾄされる頂点集合. indeg は辺の入次数

    rep(i, 0, N) for(auto j : G[i]) indeg[j]++;

    priority_queue<int> que;

    rep(i, 0, N) if(!indeg[i]) que.push(i);

    while(!que.empty()) {
        int now = que.top();
        ans.push_back(now);
        que.pop();
        for(auto nex : G[now]) {
            indeg[nex]--;
            if(!indeg[nex]) que.push(nex);
        }
    }

    if(ans.size() != N) return {};

    return ans;
}

int main() {
    cin >> N >> M;
    G.assign(N, veci());

    rep(i, 0, M) {
        int u, v; cin >> u >> v;  // u -> v の有向辺
        u--; v--;
        G[u].push_back(v);
    }

    veci vec1 = asc_topological_sort();
    veci vec2 = desc_topological_sort();

    rep(i, 0, N) {
        if(vec1[i] != vec2[i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    veci ans(N);
    rep(i, 0, N) ans[vec1[i]] = i+1;
    cout << "Yes" << endl;
    for(auto i : ans) cout << i << " ";
    cout << endl;
}