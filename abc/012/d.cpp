#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <queue>
#include <algorithm>
using namespace std;
using ll = long long;
ll INF = 1LL << 60;

vector<vector<ll> > dist;
int V, E;

void warshall_floyd(int n) {
    for (int k=0; k<n; k++) {
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if((dist[i][k] < INF) && (dist[k][j] < INF)) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
}

int main() {
    cin >> V >> E;
    dist.assign(V, vector<ll>(V, INF));
    for(int i=0; i<E; i++) {
        ll s, t, d;
        cin >> s >> t >> d;
        s--; t--;
        dist[s][t] = d;
        dist[t][s] = d;
    }
    for(int i=0; i<V; i++) dist[i][i] = 0;

    warshall_floyd(V);

    ll ans = INF;
    for(int i=0; i<V; i++) {
        ll tmp = 0;
        for(int j=0; j<V; j++) tmp = max(tmp, dist[i][j]);
        ans = min(ans, tmp);
    }
    cout << ans << endl;
}