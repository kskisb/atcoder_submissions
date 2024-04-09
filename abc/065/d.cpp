#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;
using ll = long long;
ll INF = 1LL << 60;

int N;

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
    cin >> N;
    UnionFind UN(N);
    vector<pair<ll, pair<int, int>>> weighted_edge;
    vector<pair<pair<ll, ll>, int>> px(N), py(N);

    for(int i=0; i<N; i++) {
        ll x, y; cin >> x >> y;
        px[i] = make_pair(make_pair(x, y), i);
        py[i] = make_pair(make_pair(y, x), i);
    }

    sort(px.begin(), px.end(), [](const auto& a, const auto& b) {
        return a.first.first < b.first.first;
    });
    sort(py.begin(), py.end(), [](const auto& a, const auto& b) {
        return a.first.first < b.first.first;
    });

    for(int i=0; i<N-1; i++) {
        weighted_edge.push_back(make_pair(abs(px[i].first.first-px[i+1].first.first), make_pair(px[i].second, px[i+1].second)));
    }
    for(int i=0; i<N-1; i++) {
        weighted_edge.push_back(make_pair(abs(py[i].first.first-py[i+1].first.first), make_pair(py[i].second, py[i+1].second)));
    }

    sort(weighted_edge.begin(), weighted_edge.end());

    ll ans = 0;
    for(int i=0; i<weighted_edge.size(); i++) {
        int u = weighted_edge[i].second.first;
        int v = weighted_edge[i].second.second;
        if(UN.root(u) == UN.root(v)) continue;
        else {
            ans += weighted_edge[i].first;
            UN.connect(u, v);
        }
    }

    cout << ans << endl;
}