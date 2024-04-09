#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <queue>
#include <algorithm>
using namespace std;
using ll = long long;
ll INF = 1LL << 60;

int N, M;

class UnionFind {
public:
    vector<int> parent;
    vector<int> sides;

    UnionFind(int N) {
        parent = vector<int>(N, -1);
        sides = vector<int>(N, 0);
    }

    int root(int A) {
        if(parent[A] < 0) return A;
        return parent[A] = root(parent[A]);
    }

    int size(int A) {
        return -parent[root(A)];
    }

    bool connect(int A, int B) {
        A = root(A);
        B = root(B);
        if(A == B) {
            sides[A]++;
            return false;
        }

        if(size(A) < size(B)) swap(A, B);

        parent[A] += parent[B];
        parent[B] = A;
        sides[A]++;

        return true;
    }
};

int main() {
    int K;
    cin >> N >> M >> K;
    UnionFind UN(N);

    vector<pair<int , pair<int, int>>> weighted_edge(M);
    for(int i=0; i<M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--;
        weighted_edge[i] = make_pair(c, make_pair(a, b));
        weighted_edge[i] = make_pair(c, make_pair(b, a));
    }

    sort(weighted_edge.begin(), weighted_edge.end());

    vector<int> valid_edges;

    ll ans = 0;
    for(int i=0; i<M; i++) {
        int u = weighted_edge[i].second.first;
        int v = weighted_edge[i].second.second;
        if(UN.root(u) == UN.root(v)) continue;
        else {
            ans += weighted_edge[i].first;
            UN.connect(u, v);
            valid_edges.push_back(weighted_edge[i].first);
        }
    }

    sort(valid_edges.begin(), valid_edges.end());

    for(int i=1; i<K; i++) {
        int id = valid_edges.size()-i;
        ans -= valid_edges[id];
    }
    cout << ans << endl;
}