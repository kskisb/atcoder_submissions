#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <queue>
#include <algorithm>
using namespace std;
using ll = long long;

vector<vector<pair<ll, ll> > > G;
int V, E;

vector<ll> dijkstra(int s) {
    vector<bool> fixed(V, false);
    priority_queue<pair<ll, ll>, vector<pair<ll, ll> >, greater<pair<ll, ll> > > que;

    vector<ll> dist(V, 2e9);

    dist[s] = 0;
    que.push({dist[s], s});

    while(!que.empty()) {
        int v = que.top().second;
        que.pop();

        if(fixed[v]) continue;

        fixed[v] = true;
        for(auto v2 : G[v]) {
            int next = v2.first, cost = v2.second;
            if(dist[next] > dist[v]+cost) {
                dist[next] = dist[v] + cost;
                que.push({dist[next], next});
            }
        }
    }

    return dist;
}

int main() {
    int r;
    cin >> V >> E >> r;
    G.resize(V);
    for(int i=0; i<E; i++) {
        int s, t, d; cin >> s >> t >> d;
        G[s].push_back({t, d});
    }

    vector<ll> ans = dijkstra(r);
    for(int i=0; i<V; i++) {
        if(ans[i] != 2e9) cout << ans[i] << endl;
        else cout << "INF" << endl;
    }
}